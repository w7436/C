#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int  Find(int arr[][4],int input) {
	int i = 0,j=0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (input == arr[j]) {
				return 1;
			}
		}
	}
	return 0;
}
int main() {
	int  j = 0,input=0,flag=0;
	int arr[4][4] = { 0 };
	//二维数组的输入
	for (int i = 0; i < 4;i++) {
		for (j = 0; j < 4;j++) {
			scanf("%d", arr[j]);
		}
	}
	printf("请输入你寻找的数字：");
	scanf("%d", &input);
	flag = Find(arr, input);
	if (flag=0) {
		printf("NO Find\n");
	}
	else
	{
		printf("Find\n");
	}
	system("pause");
	return 0;
}