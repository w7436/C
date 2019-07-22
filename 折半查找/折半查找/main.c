#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int BinarySearch(int arr[], int right, int result) {
	int  left = 0;
	int middle = (left + right) / 2;
	while (right - left > 1) {
		if (arr[middle] < result) {    //���ұ���
			left = middle;
			middle = (left +right) / 2;
		}
		if (arr[middle] > result) {  //�������
			right = middle;
			middle = (right + left)/2;
		}
		if (arr[middle] == result)
			break;
	}
	if (arr[middle] == result)
		return middle;
	else
		return -1;
}
int main() {
	int result = 0,m=0;
	int arr[] = { 1,3,6,7,9,14,35,67 };
	int right = sizeof(arr) / sizeof arr[0]-1;
	printf("��������Ѱ�ҵ����֣�");
	scanf("%d", &result);
	m=BinarySearch(arr, right, result);
	printf("%d\n", m);
	return 0;
	
}