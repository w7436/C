#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//���������ĺ�
int Subarray_Max1(int arr[], int len) {
	int sum = -100000;   //����һ���㹻С�����ֵ
	for (int i = 0; i < len; i++)
	{
		int sub = 0;  //��ʱ���ֵ
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
//ʱ�临�Ӷ�ΪO��n��
int Max(int a, int b) {
	return (a > b ? a : b);
}
int Subarray_Max2(int arr[], int len) {
	int sum = arr[0]; //��ʱ�����ֵ
	int max = arr[0]; //�ȽϺ�����ֵ
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
	int len = sizeof(arr) / sizeof(arr[0]); //����ĳ���
	printf("%d\n", Subarray_Max2(arr, len));
	system("pause");
	return 0;
}