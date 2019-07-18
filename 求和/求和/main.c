#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main() {
	double sum = 0.0;
	double j = -1;
	for (int i = 1; i <= 10;i++) {
		j =  j * (-1);
		sum =sum+ j/i;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}