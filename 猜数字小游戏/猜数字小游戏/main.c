#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*      ϵͳ�������һ��1-100�����֣����û����£�
����������µ���ϵͳ��ʾ low�����¸���ϵͳ��ʾ high
���������������ϵͳ����ʾyou are right!*/
//void Meum() {
//	printf("**************************\n");
//	printf("*******1.play game********\n");
//	printf("*******2.game over********\n");
//	printf("**************************\n");
//}
//void  Game(int result) {
//	int a=0;
//	static  int i = 0;
//	while (i!=10) {
//		printf("��������µ���:");
//		scanf("%d", &a);
//		if (i == 10) {
//			printf("��Ϸ������\n");
//			break;
//		}
//		if (a<result) {
//			printf("LOW!\n");
//			i++;
//		}
//		if (a>result) {
//			printf("HEIGHT!\n");
//			i++;
//		}
//		if (a==result) {
//			printf("RIGHT!\n");
//			break;
//		}
//	}
//}
void Menu()
{
	printf("******��ӭ������������Ϸ********\n");
	printf("******         1.play      ************\n");
	printf("******         0.exit       ************\n");
	printf("**********************************\n");
}
void Game()
{
	//printf("��������Ϸ���߼�����\n");
	//rand()%100-->[0-100)    rand()%100+1->[1-100]
	int randNum = rand() % 100 + 1;//����� 0 - 32767
	int num = 0;
	//printf("randNum==%d\n",randNum);
	while (1)
	{
		printf("��������Ҫ�µ�����-��");
		scanf("%d", &num);
		if (num > randNum)
		{
			printf("�´���\n");
		}
		else if (num < randNum)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��,�¶���\n");
			break;
		}
	}
}
//int main() {
//	int num = 0,result = 0;
//	Meum();
//	printf("���������ѡ��:");
//	scanf("%d", &num);
//	srand((unsigned int)time(NULL));
//	result = rand() % 100 + 1;
//	while (1) {
//		if (num == 1) {
//			Game(result);
//			break;
//		}
//		if (num == 2) {
//			printf("game over!");
//			break;
//		}
//		if (num != 1 && num != 2) {
//			printf("��������ȷ��ѡ��:");
//			scanf("%d", &num);
//		}
//	}
//	return 0;
//}

int main()
{
	//void srand( unsigned int seed );

	//Gets the system time. 1970.1.1- 
	//time_t time( time_t *timer );

	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("��������Ĳ�������");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������ȷ�Ĳ�����\n");
			break;
		}
	} while (input);
	return 0;
}