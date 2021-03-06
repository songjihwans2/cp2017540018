// 20181204 (2).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

//
//Linked List 연습
#include <stdlib.h>
#include <stdio.h>
typedef struct node {
	int score;
	struct node* pNext;
} Node;

//함수 printLL() 화면에 연결리스트의 score값을 출력
//입력: 연결리스트 (연결리스트의 헤드노드 포인터)
//출력: 없음
//부수효과: 없음
void printLL(Node* ptr) {
	while (ptr != NULL) {
		printf("score=%d\n", ptr->score);
		ptr = ptr->pNext;
	}
}
//함수 createNode()
//입력: 성적
//출력: 노드하나를 동적할당으로 생성하여 포인터를 반환한다. 이 때 score = 입력, pNext = NULL로 한다.
//부수효과: 없음
Node* createNode(int input) {
	Node* ptr;
	ptr = (Node*)malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}
//함수 addHead()
//입력: 연결리스트, 새 노드
//출력: 없음
//부수효과: 연결리스트 헤드에 새 노드를 추가
//void addHead(Node* pHead, Node* pNewNode) {
//	pNewNode->pNext = pHead;
//	pHead = pNewNode;
//}

//int main() {
//	Node* pHead = NULL;//헤드노드의 포인터. NULL이면 연결리스트가 없다는 의미(로 약속히자).
//	//Node a, b;
//	//a.score = 10; b.score = 20;
//	//a.pNext = &b; b.pNext = NULL;
//	//pHead = &a;
//	pHead = createNode(10);
//	ptr = createNode(20);
//	addHead(pHead, ptr);
//	printLL(pHead);

//함수 addHead()
//입력: 연결리스트의 이중포인터 (헤드 포인터의 포인터), 새 노드 포인터
//출력: 없음
//부수효과: 연결리스트 헤드에 새 노드를 추가
void addHead(Node** ppHead, Node* pNewNode) {
	pNewNode->pNext = *ppHead;
	*ppHead = pNewNode;
}
int main() {
	Node* pHead = NULL, *ptr;//헤드노드의 포인터. NULL이면 연결리스트가 없다는 의미(로 약속히자).
	//Node a, b;
	//a.score = 10; b.score = 20;
	//a.pNext = &b; b.pNext = NULL;
	//pHead = &a;
	pHead = createNode(10);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	printLL(pHead);

	return 0;
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
