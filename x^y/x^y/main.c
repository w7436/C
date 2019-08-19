#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
//2*2*2=8
int  power(int x,int y) {
	int sum = 1;
	while (y!=0) {
		sum *= x;
		y--;
	}
	return sum;
}
int main() {
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	printf("%d\n", power(x, y));
	system("pause");
	return 0;
}