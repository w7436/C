#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int n=0,m=0,sum=0,a[256]={0};
	printf("请输入需计算的数：");
	scanf("%d", &m);
	printf("请输入求和项：");
	scanf("%d", &n);
	for (int i = 0; i <n;i++) {
		a[i] = m * pow(10, i);
		sum += a[i];
		a[i] = sum;
	}
	sum = 0;
	for (int i = 0; i < n;i++) {
		sum += a[i];	
	}
	printf("%d\n", sum);
	return 0;
}