#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//最大子数组的和
int Subarray_Max1(int arr[], int len) {
	int sum = -100000;   //给定一个足够小的最大值
	for (int i = 0; i < len; i++)
	{
		int sub = 0;  //临时最大值
		for (int j = i; j < len; j++)
		{
			sub += arr[j];
			if (sub > sum)
			{
				sum= sub;
			}
		}
	}
	return sum;
}
//时间复杂度为O（n）
int Max(int a, int b) {
	return (a > b ? a : b);
}
int Subarray_Max2(int arr[], int len) {
	int sum = arr[0]; //临时的最大值
	int max = arr[0]; //比较后的最大值
	for (int i = 0; i < len;i++) {
		sum = Max(sum + arr[i], arr[i]);
		if (sum>=max) {
			max = sum;
		}
	}
	return max;
}
int main() {
	int arr[] = { 1,-2,3,10,-4,7,2,-5 };
	int len = sizeof(arr) / sizeof(arr[0]); //数组的长度
	printf("%d\n", Subarray_Max2(arr, len));
	system("pause");
	return 0;
}