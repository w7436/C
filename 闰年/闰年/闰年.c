#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int t = 0;
	for (int i = 1000; i <= 2000; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
			printf("%6d", i);
			t = t + 1;
			if (t % 10 == 0) {
				printf("\n");
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
