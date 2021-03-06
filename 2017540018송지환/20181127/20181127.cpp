// 20181127.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

//
#include <stdio.h>
////구조체 선언: 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.
//struct complex {
//	double real;//멤버 변수(member variable)
//	double imag;//상동(ditto)
//};//구조체 선언은 반드시 세미콜론으로 끝내야 한다.
//typedef struct complex Complex;//자료형 "struct complex"를 앞으로 "Complex"라고 부르겠다.

//위의 두 문장을 한문장으로 만들 수 있다.
typedef struct complex {
	double real;
	double imag;
} Complex;

//데이터 타입의 별명 선언
typedef int myIntType;//자료형 "int"를 앞으로 "myIntType"라고도 부르겠다.

//함수 printComplex()
//입력: 복소수
//출력: 없음
//부수효과: 없음
void printComplex(Complex* ptr) {//대부분의 경우, 구조체 포인터를 매개변수로 전달 받는다.
	printf("%f + j%f\n", ptr->real, ptr->imag);
}
//함수 convertToConjugate()
//입력: 복소수(포인터)
//출력: 없음
//부수효과: 입력된 복소수가 켤레 복소수로 변환됨
void convertToConjugate(Complex* ptr) {
	//허수부에 -1을 곱한다
	ptr->imag = -1 * ptr->imag;
}
//함수: returnConjugate()
//입력: 복소수 포인터
//출력: 복소수 변수
//부수효과: 없음
Complex returnConjugate(Complex* ptr) {
	Complex temp;
	temp.real = ptr->real; temp.imag = -1 * ptr->imag;
	return temp;
}

int main() {
	myIntType count = 10;// -> int count = 10;
	//구조체 변수 선언
	Complex a; // -> struct complex a;
	//구조체 포인터 변수 선언
	//대부분 구조체는 포인터 변수를 사용하여 접근한다.
	Complex* ptr;
	a.real = 10;//구조체변수의 멤버변수 접근방법 -> 구조체변수이름.멤버변수이름
	a.imag = 20;
	printComplex(a);
	ptr = returnConjugate(&a); printComplex(ptr);
	//convertToConjugate(&a); printComplex(&a);

	//b = returnConjugate(&a); printComplex(&b);
	//conjugate(&a); printComplex(&a);

	//구조체 포인터 변수 선언
	//대부분 구조체는 포인터 변수를 사용하여 접근한다.
	Complex* ptr;
	ptr = &a;

	ptr->real = 100;//구조체 포인터 변수의 멤버변수 접근방법 -> 구조체변수이름, 멤버변수이름
	ptr->imag = 200;
	printComplex(a);

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
