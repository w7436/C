#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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