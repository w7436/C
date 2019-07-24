#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//判断一个数是否是闰年
int  IsLeap(int n) {
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
		return 1;
	}
	return 0;
}
int main() {
	int year = 0;
	int m = 0;
	printf("请输入需要判断的年份：");
	scanf("%d", &year);
	m = IsLeap(year);
	if (m == 1) {
		printf("IS leapyear\n");
	}
	else
		printf("IS not leapyear\n");

	/*int t = 0;
	for (int i = 1000; i <= 2000; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
			printf("%6d", i);
			t = t + 1;
			if (t % 10 == 0) {
				printf("\n");
			}
		}
	}
	printf("\n");*/
	system("pause");
	return 0;
}
