#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main() {
	char arr1[] = "How are you?";
	char arr2[] = "************";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	for (left = 0, right = strlen(arr1) - 1;right-left>=0;left++,right--) {
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
	}
	return 0;
}