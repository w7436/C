#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
int main() {
	int a = 10, b = 20;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d", a, b);
	system("pause");
	return 0;
}