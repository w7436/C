#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
//0^1=1,0^0=0,1^1=0
//ĳ��Ԫ��ֻ����һ��
int  Search(int arr[], int len)
{
	int i, tmp = 0;
	for (i = 0; i < len; i++)
	{
		// �����������
		tmp ^= arr[i];
	}
	// ���ؽ��
	return tmp;
}
//����Ԫ�س���һ��,�����ӡ
void   Search1(int arr[], int len) {
	int i = 0,j=0,result=0;
	int pos = 0;
	int t = 0;  
	for (i = 0; i < len;i++) {
		result ^= arr[i];
	}
	//Ѱ�ҵ�һ�γ���1��λ��
	for (pos = 0; pos < 32;pos++) {
		if (((result >> pos) & 1) == 1) {
			break;
		}
	}
	//Ѱ����������ͬλ�ó���1 �������������
	for (j = 0; j < len;j++) {
		if (((arr[j]>>pos)&1)==1) {
			t ^= arr[j];
		}
	}
	printf("%d %d\n",t , result^t);
}
int main(){
	int arr[8] = { 1,3,5,7,1,3,5,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//printf("%d ",search(arr, len));
	search1(arr, len);
	system("pause");
	return 0;
}