#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void BinarySearch(int arr[], int right, int result) {
	int  left = 0;
	int middle = (left + right) / 2;
	while (arr[middle] !=result) {
		if (arr[middle]<result) {    //���ұ���
			middle = (middle + right)/2;
			continue;
		}
		if (arr[middle] >=result) {  //�������
			middle =( middle + left)/2;
			continue;
		}
	}
	printf("%d\n", middle);
}
int main() {
	int result = 0;
	int arr[] = { 1,3,6,7,9,14,35,67 };
	int right = sizeof(arr) / sizeof arr[0]-1;
	printf("��������Ѱ�ҵ����֣�");
	scanf("%d", &result);
	BinarySearch(arr, right, result);
	return 0;
	
}