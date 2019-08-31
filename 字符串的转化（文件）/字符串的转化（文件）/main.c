#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	FILE *fp;
	int i = 0;
	char* pstr = malloc(100);
	printf("请输入字符串：");
	gets(pstr);
	//scanf("%s", str);
	while (*pstr != '\0') {
		if ('a' <= *pstr&&*pstr <= 'z') {
			*pstr -= 32;
		}
		pstr++;
	}
	fp = fopen("D:/mama.txt", "w");
	if (fp == NULL) {
		perror("文件打开失败！");
	}
	fputs(pstr, fp);
	free(pstr);
	fclose(fp);
	system("pause");
	return 0;

}