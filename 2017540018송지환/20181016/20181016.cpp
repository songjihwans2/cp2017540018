// 20181016.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

//
#include <stdio.h>
int main() {
	//이 위는 당분간 무시

	//ctrl-k, ctrl-f: format, 소스코드 선택영역을 예쁘게 포맷한다.
	//ctrl-]: matching parentheses
	//ctrl-k, ctrl-c: 선택한 영역을 comment out
	//ctrl-k, ctrl-u: undo comment out

	//int count = 1;
	//while (count <= 10) {
	//	printf("count = %d\n", count);
	//	count = count + 1;
	//}

	//int count = 1;
	//while (count <= 10) {
	//	printf("count = %d\n", count);
	//	count = count++;
	//}

	//int count = 1;
	//while (count <= 10) {
	//	printf("count = %d\n", count++);
	//}

	//1에서부터 100까지 3의 배수만 화면에 출력
	//int count = 1;
	//while (count <= 100) {
	//	if (count % 3 == 0)
	//		printf("count = %d\n", count);
	//	count++;
	//}

	//1에서부터 100까지 3의 배수를 제외한 정수만 화면에 출력
	//int count = 1;
	//while (count <= 100) {
	//	if (count % 3 != 0)
	//		printf("count = %d\n", count);
	//	count = count + 1;
	//}

	//while (0) {};

	//키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램
	//위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다.
	//int input;
	//while (1) {
	//	printf("정수를 입력하세요:");
	//	scanf_s("%d", &input);
	//	if (input == 100)
	//		break;
	//	if (input >= 1000) {
	//		printf("입력한 정수가 1000보다 큽니다. 다시 입력해 주세요\n");
	//		continue;
	//	}
	//	if (input % 3 == 0)
	//		printf("입력한 정수 %d는 3의 배수입니다\n", input);
	//	else
	//		printf("입력힌 정수 %d는 3의 배수가 아닙니다\n", input);
	//}

	//1에서 100까지의 정수의 합을 구하시오.
	//int sum = 0, i = 1;
	//while (i <= 100) {
	//	sum = sum + i;
	//	i++;
	//}
	//printf("the sum is %d\n", sum);

	//int sum = 0, i = 1;
	//while (i <= 100) {
	//	sum = sum + i++;
	//}
	//printf("the sum is %d\n", sum);

	//int sum = 0, i = 1;
	//while (i <= 100) {
	//	sum += i++;
	//}
	//printf("the sum is %d\n", sum);

	//이 아래도 당분간 무시
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
