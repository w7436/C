#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

/*��Ŀ��
		����һ���������飬ʵ��һ��������
		�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
		����ż��λ������ĺ�벿�֡�
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