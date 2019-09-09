#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子:
//1999 2299
//输出例子:7

int dif(int num1, int num2) {
	int i = 0;
	int count = 0;
	int tmp;
	tmp = num1 ^ num2;
	for (; i < 32; i++) {
		if ((tmp >> i) & 1 == 1) {
			count++;
		}
	}
	return count;

}
int main()
{
	int num1, num2;
	printf("请输入两位数字：");
	scanf("%d %d", &num1, &num2);
	printf("%d\n", dif(num1, num2));
	system("pause");
	return 0;
}