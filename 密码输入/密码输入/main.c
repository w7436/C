#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include "stdio.h"
#include <string.h>
int main() {
	char a[10], b[10] = "hello";
	printf("���������룺");
	int m = 0;
	while (m < 3) {
		scanf("%s", a);
		if (strcmp(a, b) == 0) {
			printf("����������ȷ\n");
			break;
		}
		else
			printf("���������룺");
		m++;
	}
	system("pause");
	return 0;
}