// 20181211.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

//
#include <stdlib.h>
#include <stdio.h>
typedef struct node {
	int score;
	struct node* pNext;
} Node;

void printLL(Node* ptr) {
	while (ptr != NULL) {
		printf("score=%d\n", ptr->score);
		ptr = ptr->pNext;
	}
}

void addHead(Node** ppHead, Node* pNewNode) {
	pNewNode->pNext = *ppHead;
	*ppHead = pNewNode;
}

//함수: returnTail()
//입력: 연결리스트(연결리스트의 헤드노드 포인터)
//출력: 마지막 노드의 포인터
//부수효과: 없음
Node* returnTail(Node* ptr) {
	if (ptr == NULL)//연결리스트에 노드가 없음
		return NULL;

	while (ptr != NULL) {
		if (ptr->pNext == NULL)
			return ptr;
		ptr = ptr->pNext
	}
}

//함수: addTail()
//입력: 연결리스트, 추가하려는 노드 포인터
//출력: 없음
//부수효과: 추가하려는 노드가 연결리스트의 tail로 추가됨
void addTail(Node* pHead, Node* pNode) {
	if (pHead == NULL) {//@ 이중 포인터를 사용해야 해결되는 같은 문제 발생
		printf("error can't add a tail to empty linked list\n");
		return;
	}

	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;//@ pHead = NULL; addTail(pHead, createNode(100)); 뻥 터져버림
}

//함수: averageLL()
//입력: 연결리스트
//출력: 노드 성적의 평균(double)
//부수효과: 없음
int main() {

	//double test;
	//test = 10 / 4;//1. (10/4)->2를 반환, 2. 정수형 2를 double형 2.0으로 변환
	//printf("test = %f\n", test);
	//test = 10.0 / 4;//1. (10.0/4)->2.5를 반환
	//printf("test = %f\n", test);
	//test = ((double)10) / 4;//1. 정수형(int) 10을 실수형(double) 10.0으로 반환
	//printf("test = %f\n", test);

	Node* pHead = NULL, *ptr;
	pHead = createNode(11);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	addTail(pHead, createNode(100))
	printLL(pHead);
	printf("average = %f\n", averageLL(pHead));

	double averageLL(Node* ptr) {
		int sum = 0, count = 0;
		double average;
		while (ptr != NULL) {
			sum += ptr->score;
			count++;
			//printf("score = %d\n", ptr -> score);
			ptr = ptr->pNext;
		}
		average = ((double)sum) / count;
		return average;
	}
}
//

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
