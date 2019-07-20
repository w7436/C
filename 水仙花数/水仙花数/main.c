#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int a[20], b = 0;
	int N;
	for (N = 0; N < 100000; N++) {
		int n = N, i = 0, sum = 0, count = 1;
		a[i] = n % 10;
		while (n / 10 != 0) {
			b = n % 10;
			n = n / 10;
			count++;
			a[i++] = b;
		}
		a[i] = n;
		for (; i >= 0; i--) {  
			sum += pow(a[i], count);
		}
		if (N == sum) {
			printf("%d\n", N);
		}
	}
	return 0;
}