#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
//µÝ¹é
int Fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else
		return (fib(n - 1) + fib(n - 2));
}
//·ÇµÝ¹é
int Fib(int n) {
	if (n==1) {
		return 1;
	}
	int num0 = 0;
	int num1 = 1;
	int sum = 0;
	for (int i = 1; i < n; i++) {
		sum = num0 + num1;
		num0 = num1;
		num1 = sum;
	}
	return sum;
}
int main() {
	printf("%d\n", Fib(6));
	printf("%d\n", Fib(1));
	return 0;
}