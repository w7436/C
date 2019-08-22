#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Num(int arr[],int input,int len) {
	int left = 0, right = len;
	int sum = 0;
	while (left != right) {
		sum = arr[left] + arr[right];
		if (input < sum) {
			right--;
		}
		else if (input>sum) {
			left++;
		}
		else {
			printf("%d %d", left, right);
			break;
		}
	}
}
int main() {
	int input = 0;
	int arr1[] = { 1,4,8,10,16,17,19 };
	int len = sizeof(arr1) / sizeof(arr1[0])-1;
	scanf("%d", &input);
	Num(arr1, input,len);
	system("pause");
	return 0;
}