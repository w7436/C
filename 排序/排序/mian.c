#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
//ð������
void Bubblesort(int arr[],int len) {
	int i = 0;
	int flg = 0;
	for (i = 0; i < len - 1; i++)//����
	{
		int j = 0;
		flg = 0;//ÿһ�˽���������Ϊ0
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
		if (flg == 0)//֤��û�н���
		{
			break;
		}
	}
}
//ֱ�Ӳ�������
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
//ѡ������
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