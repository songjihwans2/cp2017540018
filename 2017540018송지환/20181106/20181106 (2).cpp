#include <stdio.h>
void test(int a) {
	a = 100;
}
void testPointer(int* ptr) {
	*ptr = 100;
}

int main() {
	int a = 10;
	test(a);
	printf("a=%d\n", a);

	//�����͸� �Ű����������� ����
	testPointer(&a);
	printf("a=%d\n", a);

	return 0;
}