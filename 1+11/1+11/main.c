#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰn��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
int main() {
	int a = 2, n = 0, sum = 0, tmp = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		tmp = tmp * 10 + a;  //2 22 222
		sum += tmp;
	}
	printf("%d\n", sum);
	return 0;
}

#if 0
int main() {
	int n=0,m=0,sum=0,a[256]={0};
	printf("����������������");
	scanf("%d", &m);
	printf("����������");
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

#endif