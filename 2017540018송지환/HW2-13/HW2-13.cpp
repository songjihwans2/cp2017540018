// HW2-13.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

//
#include <stdio.h>
int main()
{

	int month;
	int day = 0;
	int total;
	do
	{
		printf("month를 입력하시세요:\n");
		scanf_s("%d", &month);
		if (month == 2)
		{
			if (day >= 1 && day <= 28)
			{
				printf("day를 입력하세요:\n");
				scanf_s("%d", &day);
			}
		}
		else
			printf("day를 입력하시세요:\n");
		scanf_s("%d", &day);
		break;
	} while (month >= 1 && month < 13 && day >= 1 && day < 32);
	switch (1)
	{
	case 1:
		if (month == 1)
		{
			total = day;
			break;
		}
	case 2:
		if (month == 2)
		{
			total = 31 + day;
			break;
		}
	case 3:
		if (month == 3)
		{
			total = 59 + day;
			break;
		}
	case 4:
		if (month == 4)
		{
			total = 90 + day;
			break;
		}
	case 5:
		if (month == 5)
		{
			total = 120 + day;
			break;
		}
	case 6:
		if (month == 6)
		{
			total = 151 + day;
			break;
		}
	case 7:
		if (month == 7)
		{
			total = 181 + day;
			break;
		}
	case 8:
		if (month == 8)
		{
			total = 212 + day;
			break;
		}
	case 9:
		if (month == 9)
		{
			total = 243 + day;
			break;
		}
	case 10:
		if (month == 10)
		{
			total = 274 + day;
			break;
		}
	case 11:
		if (month == 11)
		{
			total = 304 + day;
			break;
		}
	case 12:
		if (month == 12)
		{
			total = 334 + day;
			break;
		}
	}
	printf("%d일 입니다.\n", total);

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
