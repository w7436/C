#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//Õ·×ªÏà³ý·¨
int main() {
	int a, b, c = 0;
	printf("please enter 2 numbers:");
	scanf("%d%d", &a, &b);
	do {
		c = a % b;
		a = b;
		b = c;
	} while (a%b != 0);
	printf("%d\n", b);
	system("pause");
	return 0;
}