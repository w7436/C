#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include "stdlib.h"

//��������:�ڿӷ�
//				  1.ȷ��һ������������һ������Ϊ������
//              2.�������̣������������ķ����ұߣ��������С�ķ������
//				 3.�������߿�ʼɨ�裬ע��Ӻ���ǰ���һ���С��������ǰ���������ұȻ���С������ֱ���������
//             4.�����������ٽ���ɨ��
void QuickSort(int *A, int left, int right)
{
	int temp;      
	int i = left, j = right;
	if (left < right)
	{
		temp = A[left];       //���û������ڿ�
		while (i != j)
		{
			while (j > i&&A[j] > temp) 
				j--;              //���ұ�ɨ���ҵ�һ��С��tempԪ��

			if (i < j)
			{
				A[i] = A[j];          //����λ�ã����
				++i;
			}
			while (i < j&&A[i] < temp) 
				i++;						//�����ɨ�裬�ҵ�һ������tempԪ��

			if (i < j)
			{
				A[j] = A[i];
				j--;
			}
		}
		A[i] = temp;						 //temp��������λ��
		QuickSort(A, left, i - 1);        //��temp���Ԫ�ؽ���ɨ��
		QuickSort(A, i + 1, right);		 //��temp�ұ�Ԫ�ؽ���ɨ��
	}
}
void POPO(int a[],int m) {
	int t;
	for (int i = 0; i < m;i++) {
		for (int j = 0; j < m - i;j++) {
			if (a[j]>a[j+1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < m;i++) {
		printf("%d",a[i]);
	}
}
int main() {
	//ð������
			/*int a[6]={1,5,7,8,6,4};
			int t;
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5 - i; j++) {
					if (a[j] > a[j + 1]) {
						t = a[j];
						a[j] = a[j + 1];
						a[j + 1] = t;
					}
				}
			}
			for (int i = 0; i < 6; i++) {
				printf("%d ", a[i]);
			}*/
//ѡ������
	/*int a[6] = { 9,4,7,8,3,1 };
	int t;
	for (int i = 0; i < 6; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (a[j] < a[i]) {
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	for (int i = 0; i < 6; i++) {
		printf(" %d", a[i]);
	}*/


//��������(ȡ��һ��Ϊ�����飬����Ϊδ�����飬��δ�������һ��Ϊ����Ԫ�أ�����������бȽϣ�ȷ������λ��)
//	int a[6] = { 1,6,3,9,5,0 };
//	int t ;				//���������
//	int j;
//	for (int i = 1; i < 6; i++) {
//		t = a[i];				//δ������ĵ�һ��Ԫ��
//		j = i - 1;				//���������һ��Ԫ�ص��±�
//		while (i>=0&&t<=a[j]) {
//			a[j + 1] = a[j];
//			j;
//		}
//		a[j+1] = t;
//}
//	for (int i = 0; i < 6; i++) {
//		printf("%2d", a[i]);
//	}
//ϣ������
	/*int a[6] = { 1,4,3,5,6,5 };
	int n = 6;
	int i, j, gap;
	for (gap = n / 2; gap > 0; gap /= 2) {
		for (i = 0; i < gap; i++) {
			for (j = i + gap; j < n; j += gap) {
					int temp = a[j];
					int k = j - gap;
					while (j >= 0 && temp<a[k])
					{
						a[k + gap] = a[k];
						k -= gap;
					}
					a[k + gap] = temp;
			}
		}
	}
	for (int i = 0; i < 6; i++) {
		printf("%2d", a[i]);
}
 */

//��������
	int a[6] = { 8,8,6,3,7,4 };
	QuickSort(a, 0, 5);
	for (int i = 0; i < 6; i++) {
		printf("%2d", a[i]);
	}
	
	
	system("pause");
	return 0;
}
