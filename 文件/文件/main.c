#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����������A��B������һ����ĸ������Ҫ����������Ϣ���кϲ�������ĸ˳�����������һ�����ļ���
int main() {
	FILE *fp1, *fp2, *fp3;
	char str1[20];
	char str2[10];

	int i = 0, j = 0, count = 0, tmp = 0;
	fp1 = fopen("D:/mama.txt", "r");
	fp2 = fopen("D:/mamama.txt", "r");
	if (fp1 == NULL) {
		perror("�ļ���ʧ�ܣ�");
	}
	if (fp2 == NULL) {
		perror("�ļ���ʧ�ܣ�");
	}
	fgets(str1, 7, fp1);
	fgets(str2, 7, fp2);
	strcat(str1, str2);
	//ð������
	while (str1[i] != '\0') {
		count++;
		i++;
	}
	for (i = 0; i < count - 1; i++) {
		int flag = 0;
		for (j = 0; j < count - 1 - i; j++) {
			if (str1[j] < str1[j + 1]) {
				tmp = str1[j];
				str1[j] = str1[j + 1];
				str1[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
	fp3 = fopen("D:/str.txt", "w");
	if (fp3 == NULL) {
		perror("�ļ���ʧ��");
	}
	fputs(str1, fp3);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	system("pause");
	return 0;
}