#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char  repeat_let(char arr[],int len) {
	int i = 0;
	int j = 0;
	for (i = 0; i < len;i++) {
		for (j = i + 1; j < len;j++) {
			if (arr[i]==arr[j]) {
				return arr[i];
			}
		}
	}
}
int main() {
	char arr[100] = "qydwer23tdwd";
	int len = strlen(arr);
	printf("%c", repeat_let(arr,len));
	system("pause");
	return 0;
}