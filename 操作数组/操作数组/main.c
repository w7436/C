#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <string.h>
//����ĳ�ʼ��
void Init(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = i;
	}
}
//��������
void Empty(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
//���������
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
//��ӡ����
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

