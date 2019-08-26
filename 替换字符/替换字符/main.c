#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char* Change(char arr[],int len) {
	int i = 0,j=0;
	for (; i < len;i++) {
		if (arr[i]==' ') {
			for (j = len; j >= i; j--) {			//将字符串从空格到最后的'\0'都往后移动两个位置
				arr[j + 2] = arr[j];
			}
			arr[i] = '%';
			arr[i + 1] = '2';
			arr[i + 2] = '0';
			len += 2;
		}
	}
	return arr;
}
int main() {
	char arr[] = "a b";
	int len = strlen(arr);
	printf("%s", Change(arr,len));
	system("pause");
	return 0;
}