#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int count=0;
	for (int n = 1; n <= 100;n++) {
		if ((n%10==9)||(n/10==9)) {
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}