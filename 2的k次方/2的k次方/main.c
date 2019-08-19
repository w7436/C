#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
unsigned int *num(unsigned int arr[]) {
	unsigned int i = 1,sum=1,k=0;
	while (i<31) {
		sum *= 2;
		arr[k++] = sum;
		i++;
	}
	return arr;
}
int   Judge(unsigned int input, unsigned int arr[]) {
	unsigned int *arr1 = num(arr);
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		if (input == arr1[i]) {
			return 1;
		}
	}
	return 0;
}
int main() {
	unsigned int arr[] = { 0 };
	unsigned int input = 0;
	scanf("%d", &input);
	int flag = Judge(input,arr);
	if (flag=1) {
		printf("%d是2的次方\n",input);
	}
	else
	{
		printf("%d不是2的次方",input);
	}
	system("pause");
	return 0;
}