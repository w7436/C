#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count_1(int input) {
	int count = 0;
	while (input!=0){
		if (input%2==1) {
			count++;
		}
		input /= 2;
	}
	return count;
}
int main(){
	unsigned int input=0;
	printf("请输入需计算的数：");
	scanf("%d", &input);
	printf("%d\n", count_1(input));
	system("pause");
	return 0;
}