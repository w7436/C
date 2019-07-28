#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//从src数组开始向后偏移start个字符的位置开始，最多复制len个非NUL字符到dst数组
//dst数组以NUL结尾，函数的返回值为存储于dst数组中的字符串的长度
void substr(char dst[], char str[], int start, int len) {
	int m = 0;
	int i = start;
	for ( i = start,m=0; i <= len;i++,m++) {
		if (str[i]==' ') {
			len++;
			continue;
		}
		dst[m] = str[i];
		printf("%c", dst[m]);
		if (m==len) {
			dst[i] = '\0';
		}
	}
}
int main() {
	char src[] = "how are you";
	char dst[102] = "  ";
	 substr(dst, src,1, 4);
	 return 0;
}