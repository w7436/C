#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Function(int n) {
	int count = 0;
	if (n%10==9) {
		count++;
	}
	if (n/10==9) {
		count++;
	}
	return count;
}
int main() {
	int count=0;
	for (int n = 1; n <= 100;n++) {
		count += Function(n);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}