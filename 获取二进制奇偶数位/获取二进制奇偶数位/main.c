#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
void Fun(char num) {
	int i = 0;
	int flg = 0;
	if (flg == 0) {
		printf("����λ��");
		for (i = 8; i > 0; i -= 2) {
			printf("%d", num >> i & 1); //ż��λ
		}
	}
	flg = 1;
	printf("\n");
	if (flg == 1) {
		printf("ż��λ��");
		for (i = 7; i > 0; i -= 2) {
			printf("%d", num >> i & 1);//����λ
		}
		printf("\n");
	}
}
int main()
{
	char num = 0;
	printf("��������Ҫ��������֣�");
	scanf("%d", &num);
	Fun(num);
	system("pause");
	return 0;
}