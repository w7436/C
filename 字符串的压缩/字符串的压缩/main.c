#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
//xxxyy------>3x2y    RLE�г̳��ȱ���ѹ���㷨
//hhheello
void reduce_str(unsigned char *str1,unsigned char *str2){    //str1����������ַ�����str2����ѹ������ַ���
	unsigned  int i, j ,count=0,k=0;
	for (i = 0; i < strlen(str1); i+=count) {          // strlen����һ���޷�������
		count = 0;
		for (j = i; str1[j] == str1[i]; j++) {
			count++;
		}
		str2[k++] = count + '0';
		str2[k++] = str1[i];
	}
	str2[i] = '\0';
}
void Show(unsigned char *str2) {
	unsigned int i = 0;
	for (i = 0; i < strlen(str2); i++) {
		printf("%c", str2[i]);
	}
	printf("\n");
}
int main() {
	unsigned char *str1 = "hhheello";
	unsigned char str2[100] = {0};
	reduce_str(str1, str2);
	Show(str2);
	system("pause");
	return 0;
}