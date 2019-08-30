#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
//冒泡排序
void Bubblesort(int arr[],int len) {
	int i = 0;
	int flg = 0;
	for (i = 0; i < len - 1; i++)//趟数
	{
		int j = 0;
		flg = 0;//每一趟进来必须置为0
		for (j = 0; j < len-1- i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flg = 1;
			}
		}
		if (flg == 0)//证明没有交换
		{
			break;
		}
	}
}
//直接插入排序
void InsertSort(int arr[], int len) {
	int j = 0;
	for (int i = 1; i < len; i++) {
		int tmp = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (tmp > arr[j]) {
				arr[j + 1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j + 1] = tmp;
	}
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}
//选择排序
void SelectSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (arr[i] < arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
void Show(int arr[], int len) {
	for (int i = 0; i < len;i++) {
		printf("%d",arr[i] );
	}
}
int main() {
	int arr[] = {3,0,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Bubblesort(arr, len);
	Show(arr, len);
	return 0;
}