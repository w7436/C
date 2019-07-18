#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int main() {
	int j = 0, t = 0;
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int b[10] = { 0,9,8,7,6,5,4,3,2,1 };
	for (int i = 0; i < 10; i++, j++) {
		if (i == j) {
			t = a[i];
			a[i] = b[j];
			b[j] = t;
		}
		printf("%2d", a[i]);
	}
	printf("\n");
	for (int j = 0; j < 10; j++) {
		printf("%2d", b[j]);
	}
	printf("\n");
	system("pause");
	return 0;
}