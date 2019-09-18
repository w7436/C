#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

/*题目：
		输入一个整数数组，实现一个函数，
		来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
		所有偶数位于数组的后半部分。
*/
void reverse(int array[], int len) {
	
	for (int i = 0; i < len; i++) {
		int j = i;
		int k = j;
		if (array[j] % 2 == 1) {
			int temp = array[j];
			while (j > 0) {
				if (array[j - 1] % 2 == 0) {
					j--;
				}
				else break;
			}
			while (k > j) {
				array[k] = array[k - 1];
				k--;
			}
			array[k] = temp;
		}
	}

	
}
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, len);
	for (int i = 0; i < len;i++) {
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}