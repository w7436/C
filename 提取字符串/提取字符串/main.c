#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//��src���鿪ʼ���ƫ��start���ַ���λ�ÿ�ʼ����ิ��len����NUL�ַ���dst����
//dst������NUL��β�������ķ���ֵΪ�洢��dst�����е��ַ����ĳ���
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