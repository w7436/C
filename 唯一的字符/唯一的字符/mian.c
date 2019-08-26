#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char Only_letter(char *arr,int left,int right) {
	while (arr[left]!='\0'){
		if (arr[left]!=arr[right]) {
			right--;
			if (left == right) {
				return arr[left];
			}
			continue;
		}
		left++;
	}
}
int main() {
	char arr[] = "abaccdeff";
	int right = strlen(arr)-1;
	int left = 0;
	printf("%c\n", Only_letter(arr, left, right));
	system("pause");
	return 0;
}