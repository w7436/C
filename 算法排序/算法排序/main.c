#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//交换排序

//1.冒泡排序
void BubblingSort(int arr[],int len) {
	
	int i = 0, flg = 0,j=0;
	int tmp;
	for (i = 0; i < len-1;i++) {
		flg = 0;
		for (j = 0; j < len - 1-i;j++) {
			if (arr[j]<arr[j+1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flg = 1;
			}
		}
		if (flg==1) {
			break;
		}
	}
}

//2.快速排序:递归的过程，
void	quickSort(int a[], int low, int high)
{

	if (low > high) {
		return;
	}
	int i = low;
	int j = high;
	int key = a[low];
	while (i < j) {
		while (i < j && a[j] >key) {
			j--;
		}
		while (i < j && a[i] <= key) {
			i++;
		}

		if (i < j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	a[low] = a[i];
	a[i] = key;
	quickSort(a, low, i - 1);
	quickSort(a, i + 1, high);
}

//选择排序

//1.选择排序:在未排序的序列中找到最大或者最小的数放在已排好的序列中，直至每个数排完
void Selectsort(int arr[],int len) {

	int i = 0, j = 0, k = 0;
	int tmp = 0;
	for (i = 0; i < len;i++) {
		k = i;
		for (j = i + 1; j < len;j++) {
			if (arr[k]<arr[j]) {
				k = j;
			}
		}
		if (k!=i) {
			tmp = arr[i];
			arr[i] = arr[k];
			arr[k] = tmp;
		}
	}
}

//2.堆排序





//插入排序

//1.直接插入排序：在一个已排好序的一系列数的基础上，每一次将待排序的数插入已排好序的一系列数中，直到所有的待排序数排列完毕
void InsertSort(int arr[], int len) {
	int i, j,tmp;
	for (i = 1; i < len;i++) {   //i代表趟数，第一次认为第一个数为有序序列
		tmp = arr[i];
		for (j = i - 1; j >= 0;j--) {
			if (tmp<arr[j]) {
				arr[j + 1] = arr[j];
			}
			else
				break;
		}
		arr[j+1] = tmp;
	}
}
//2.希尔排序:将其分组，再进行插入排序
//1 5 3 6 4 8 7 9
void shell_sort(int a[], int n)
{
	

	int gap, i, j, temp; //d为增量
	for (gap = n / 2; gap >= 1; gap = gap / 2) //增量递减到1使完成排序
	{
		//插入排序
		for (i = gap; i < n; i++)   
		{
			temp = a[i];
			for (j = i - gap; j >= 0; j = j - gap)
			{
				if (a[j] > temp) {
					a[j + gap] = a[j];
				}
				else
				{
					break;
				}
			}
			a[j + gap] = temp;
		}
	}
}



//归并排序
void dealMergeSort(int *arr, int *tmp, int start, int end) {
	if (start >= end) {
		return;
	}
	int mid = (start + end) / 2;
	dealMergeSort(arr, tmp, 0, mid);
	dealMergeSort(arr, tmp, mid + 1, end);

	int a = start;
	int b = mid + 1;
	int c = a;
	while (a <= mid && b <= end) {
		if (arr[a] >= arr[b]) {
			tmp[c] = arr[b];
			b++;
		}
		else
		{
			tmp[c] = arr[a];
			a++;
		}
		c++;
	}
	for (; a <= mid; a++, c++) {
		tmp[c] = arr[a];
	}
	for (; b <= end; b++, c++) {
		tmp[c] = arr[b];
	}
	int i;
	for (i = start; i <= end; i++) {
		arr[i] = tmp[i];
	}

}
void mergeSort(int *arr,int n) {

	int *tmp = (int *)malloc(n * sizeof(int));
	dealMergeSort(arr, tmp,0, n - 1);
	free(tmp);

}


//输出函数
void display(int arr[], int len) {
	int i = 0;
	for (i = 0; i < len; i++) {
		printf(" %d ", arr[i]);
	}
}
int main() {
	int arr[10] = { 1,5,3,6,4,8,7,9 };
	mergeSort(arr,  8);
	display(arr, 8);
	system("pause");
	return 0;
}