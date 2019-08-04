#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
int DigitSum(unsigned int n) {
	if (n>9) {
		return DigitSum(n/10) + n % 10;
	}
	else 
		return n;
}
int main() {
	printf("%d\n", DigitSum(172));
	return 0;
}