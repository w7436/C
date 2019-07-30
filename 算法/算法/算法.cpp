#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include "stdlib.h"

//快速排序:挖坑法
//				  1.确定一个基数（将第一个数设为基数）
//              2.分区过程，将比这个数大的放在右边，比这个数小的放在左边
//				 3.左右两边开始扫描，注意从后往前是找基数小的数，从前往后找是找比基数小的数，直到分区完成
//             4.对左右区间再进行扫描
void QuickSort(int *A, int left, int right)
{
	int temp;      
	int i = left, j = right;
	if (left < right)
	{
		temp = A[left];       //设置基数，挖坑
		while (i != j)
		{
			while (j > i&&A[j] > temp) 
				j--;              //从右边扫描找到一个小于temp元素

			if (i < j)
			{
				A[i] = A[j];          //交换位置，填坑
				++i;
			}
			while (i < j&&A[i] < temp) 
				i++;						//从左边扫描，找到一个大于temp元素

			if (i < j)
			{
				A[j] = A[i];
				j--;
			}
		}
		A[i] = temp;						 //temp放在最终位置
		QuickSort(A, left, i - 1);        //对temp左边元素进行扫描
		QuickSort(A, i + 1, right);		 //对temp右边元素进行扫描
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
	//冒泡排序
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
//选择排序
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


//插入排序(取第一个为有序组，其余为未排序组，以未排序组第一个为插入元素，与排序组进行比较，确定插入位置)
//	int a[6] = { 1,6,3,9,5,0 };
//	int t ;				//插入的数字
//	int j;
//	for (int i = 1; i < 6; i++) {
//		t = a[i];				//未排序组的第一个元素
//		j = i - 1;				//有序组最后一个元素的下标
//		while (i>=0&&t<=a[j]) {
//			a[j + 1] = a[j];
//			j;
//		}
//		a[j+1] = t;
//}
//	for (int i = 0; i < 6; i++) {
//		printf("%2d", a[i]);
//	}
//希尔排序
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

//快速排序
	int a[6] = { 8,8,6,3,7,4 };
	QuickSort(a, 0, 5);
	for (int i = 0; i < 6; i++) {
		printf("%2d", a[i]);
	}
	
	
	system("pause");
	return 0;
}
