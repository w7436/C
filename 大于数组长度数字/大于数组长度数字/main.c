#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Over_arr(int arr[],int len) {
	int j = 0;
	for (int i = 0; i < len; i++) {
		int count = 0;
		for (j = i; j < len; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
		}
		if (count > (len / 2)) {
			printf("%d\n", arr[i]);
		}
	}
}
int main() {
	int arr[] = { 1,2,3,2,2,2,5,4,2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Over_arr(arr,len);
	system("pause");
	return 0;
}