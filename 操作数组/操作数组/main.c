#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <string.h>
//数组的初始化
void Init(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = i;
	}
}
//数组的清空
void Empty(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
//数组的逆置
void Reverse(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
//打印数组
void Show(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	Init(arr, len);
	Show(arr, len);
	Reverse(arr, len);
	Show(arr, len);
	return 0;
}

