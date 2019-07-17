#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
int main() {				//只能被1和自身整除的数字
	int t = 0;
	for (int n = 100; n <= 200; n++) {
		int i;
		for (i = 2; i < n; i++) {     //1.  2/n  2.  2倍根号i
			if (n%i == 0) {
				break;
			}
		}
		/*for(i=2;i<=(n/2);i++)
			for(i=2;i<=sqrt((double)n);i++)   //强制类型转换
		*/
		if (i == n) {
			printf("%4d", n);
			t = t + 1;
			if (t % 5 == 0)
				printf("\n");
		}
	}
	printf("\n");
	system("pause");
	return 0;
}