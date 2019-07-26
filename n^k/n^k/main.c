#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//编写一个函数实现n^k，使用递归实现
int Exp(int n,int k) {
	if (k == 1) {
		return n;
	}
	else
		return n*Exp(n, k - 1);
}
int main() {
	printf("%d", Exp(3, 3));
	return 0;
}