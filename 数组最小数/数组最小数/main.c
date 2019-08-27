#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Min_arr(int arr[],int k) {
	int min = arr[0];
	for (int i = 0; i < k;i++) {
		if (min>arr[i]) {
			min = arr[i];
		}
	}
	return min;
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7, };
	int input = 0;
	scanf("%d", &input);
	printf("%d\n", Min_arr(arr, input));
	system("pause");
	return 0;
}