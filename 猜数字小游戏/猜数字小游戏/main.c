#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*      ϵͳ�������һ��1-100�����֣����û����£�
����������µ���ϵͳ��ʾ low�����¸���ϵͳ��ʾ high
���������������ϵͳ����ʾyou are right!*/
void Meum() {
	printf("**************************\n");
	printf("*******1.play game********\n");
	printf("*******2.game over********\n");
	printf("**************************\n");
}
void  Game(int result) {
	int a=0;
	static  int i = 0;
	while (i!=10) {
		printf("��������µ���:");
		scanf("%d", &a);
		if (i == 10) {
			printf("��Ϸ������\n");
			break;
		}
		if (a<result) {
			printf("LOW!\n");
			i++;
		}
		if (a>result) {
			printf("HEIGHT!\n");
			i++;
		}
		if (a==result) {
			printf("RIGHT!\n");
			break;
		}
	}
}
int main() {
	int num = 0,result = 0;
	Meum();
	printf("���������ѡ��:");
	scanf("%d", &num);
	srand((unsigned int)time(NULL));
	result = rand() % 100 + 1;
	while (1) {
		if (num == 1) {
			Game(result);
			break;
		}
		if (num == 2) {
			printf("game over!");
			break;
		}
		if (num != 1 && num != 2) {
			printf("��������ȷ��ѡ��:");
			scanf("%d", &num);
		}
	}
	return 0;
}