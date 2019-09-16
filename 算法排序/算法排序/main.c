#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��������

//1.ð������
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

//2.��������:�ݹ�Ĺ��̣�
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

//ѡ������

//1.ѡ������:��δ������������ҵ���������С�����������źõ������У�ֱ��ÿ��������
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

//2.������





//��������

//1.ֱ�Ӳ���������һ�����ź����һϵ�����Ļ����ϣ�ÿһ�ν�����������������ź����һϵ�����У�ֱ�����еĴ��������������
void InsertSort(int arr[], int len) {
	int i, j,tmp;
	for (i = 1; i < len;i++) {   //i������������һ����Ϊ��һ����Ϊ��������
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
//2.ϣ������:������飬�ٽ��в�������
//1 5 3 6 4 8 7 9
void shell_sort(int a[], int n)
{
	

	int gap, i, j, temp; //dΪ����
	for (gap = n / 2; gap >= 1; gap = gap / 2) //�����ݼ���1ʹ�������
	{
		//��������
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



//�鲢����
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


//�������
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