// 20181113.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

//
#include <stdio.h>
//printArray()
//입력: 배열
//출력: 없음
//부수효과: 화면에 배열의 값을 출력
//void printArray(int arr[], int len) {
void printArray(int* arr, int* len) {//앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for (int index = 0; index < len; index++) {
		printf("array[%d] = %d \n", index, arr[index]);
	}
}

int main() {
	int a[3] = { 10,20,30 };//배열의 선언: 배열이름: a, 배열길이: 3
	int* ptr;
	//배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다.
	printArray(a, 3);

	//a = ptr;//error WHY? 배열의 이름(a)는 값만 가지고 있다. 즉 rvalue이다.
	//10 = a[2];//error 위와 같은 이유

	//printArray(a, 3);

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
