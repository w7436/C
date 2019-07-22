#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//      1.先求几位数        2.进行判断
int main()
{
	int i = 0;
	for (i = 123; i <= 999999; i++)
	{
		//1、求i为几位数，例如：123  123/10=12   12/10=1   1/10=0
		int tmp = i;
		int count = 0;
		int sum = 0;
		while (tmp != 0){
			count++;
			tmp = tmp / 10;
		}
		tmp = i;
		//2、tmp的每一位求出  然后进行次方运算 
		//123   123%10=3   123/10%10=2    1%10=1   1/10  = 0
		//pow(x,y);-->x^y       
		while (tmp!=0) {
			sum+=pow((double)(tmp % 10), (double)count);
			tmp = tmp / 10;
		}
		//3、sum==i   printf("%d\n",i);
		if (sum == i) {
			printf("%d\n", i);
		}
	}
	return 0;
}
#if 0

int main() {
	int a[20], b = 0;
	int N;
	for (N = 0; N < 100000; N++) {
		int n = N, i = 0, sum = 0, count = 1;
		a[i] = n % 10;    //一位数
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
#endif