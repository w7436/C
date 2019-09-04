#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
void Fun(char num) {
	int i = 0;
	int flg = 0;
	if (flg == 0) {
		printf("奇数位：");
		for (i = 8; i > 0; i -= 2) {
			printf("%d", num >> i & 1); //偶数位
		}
	}
	flg = 1;
	printf("\n");
	if (flg == 1) {
		printf("偶数位：");
		for (i = 7; i > 0; i -= 2) {
			printf("%d", num >> i & 1);//奇数位
		}
		printf("\n");
	}
}
int main()
{
	char num = 0;
	printf("请输入需要计算的数字：");
	scanf("%d", &num);
	Fun(num);
	system("pause");
	return 0;
}