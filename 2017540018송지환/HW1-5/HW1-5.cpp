// HW1-5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

//
#include <stdio.h>
int main()
{

	printf("메뉴를 출력하고, 사용자로부터 입력을 받아 선택된 메뉴를 출력하는 프로그램을 작성하시오.\n");
	printf("choose one of the following.\n");
	printf("1 (apple)\n");
	printf("2 (orange)\n");
	printf("3 (banana)\n");
	printf("4 (peach)\n\n");
	printf("enter your choice here: ");
	int a;
	scanf_s("%d", &a);
	while (1)
	{
		if (a == 1)
		{
			printf("Your choice is apple");
			break;
		}
		else if (a == 2)
		{
			printf("Your choice is orange");
			break;
		}
		else if (a == 3)
		{
			printf("Your choice is banana");
			break;
		}
		else if (a == 4)
		{
			printf("Your choice is peach");
			break;
		}
		else
		{
			printf("try again\n");
			printf("enter your choice here: ");
			scanf_s("%d", &a);
		}
	}

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
