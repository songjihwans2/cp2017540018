// 20181113 (3).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

//
#include <stdio.h>
/* 함수: printArray()
입력: 배열
출력: 없음
부수효과: 화면에 배열의 값을 출력*/
void printArray(int* arr, int length) {
	for (int index = 0; index < length; index++) {
		printf("array[%d] = %d\n", index, arr[index]);
	}
}

/*함수: findMinIndex()
입력: 배열(배열이름, 배열길이)
출력: 최소값의 인덱스*/
int findMinIndex(int* arr, int length) {
	int minIndex = 0;
	for (int count = 1; count < length; count++) {
		if (arr[minIndex] > arr[count])
			minIndex = count;
	};
	return minIndex;
};

/*함수: swapElement()
입력: 배열, 두개의 인덱스
출력: 없음
부수효과: 배열의 두 인덱스 element가 바뀐다.
*/
void swapElement(int* arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
/*함수: selectSort()
입력: 배열
출력: 없음
부수효과: 배열이 정렬됨*/
void selectSort(int* arr, int length) {
	for (int pass = 1; pass < length - 1; pass++) {
		int result;
		result = findMinIndex(arr + pass, length - pass);
		swapElement(arr, result + pass, pass);
	}
}
/*함수: findMin()
입력: 배열(배열이름, 배열길이)
출력: 배열 최소값*/
int findMin(int* arr, int length) {
	int min = arr[0];
	for (int count = 1; count < length; count++) {
		if (min > arr[count])
			min = arr[count];
	};
	return min;
}

int main() {
	int a[5] = { 30, 35, 27, 15, 40 };
	printf("minimum value of the array is %d\n", findMin(a, 5));
	printf("The index of the minimum value is %d\n", findMinIndex(a, 5));
	swapElement(a, 0, 3);
	selectSort(a, 5);
	printArray(a, 5);

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
