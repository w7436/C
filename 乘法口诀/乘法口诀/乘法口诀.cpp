#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "stdlib.h"
void Mtp_table(int n) {
	int j =0;
	for (int i = 1; i <= n;i++) {
		for (int j = 1; j <= i;j++) {
			printf("%d*%d=%d\t", j, i, i*j);
		}
	printf("\n");
	}
}
int main() {
	int num = 0;
	printf("请输入需打印的乘法口诀：");
	scanf("%d", &num);
	Mtp_table(num);
	system("pause");
	return 0;
}