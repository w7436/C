#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//�ݹ�
int Factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else
		return n * Factorial(n - 1);
}
//�ǵݹ�
int Factorial1(int n) {
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	return sum;
}
int main() {
	printf("%d", Factorial1(4));
	printf("%d", Factorial(4));
	return 0;
}
