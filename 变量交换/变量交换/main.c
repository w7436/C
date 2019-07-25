#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
void Swap(int *p1,int *p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
int main() {
	int a = 10, b = 20;
	Swap(&a, &b);
	/*a = a + b;
	b = a - b;
	a = a - b;*/
	printf("a=%d,b=%d", a, b);
	system("pause");
	return 0;
}