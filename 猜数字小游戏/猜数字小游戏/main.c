#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*      系统随机给出一个1-100的数字，让用户来猜，
　　　如果猜低则系统提示 low，若猜高则系统提示 high
　　　如果猜中则系统提提示you are right!*/
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
//		printf("请输入你猜的数:");
//		scanf("%d", &a);
//		if (i == 10) {
//			printf("游戏结束！\n");
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
	printf("******欢迎来到猜数字游戏********\n");
	printf("******         1.play      ************\n");
	printf("******         0.exit       ************\n");
	printf("**********************************\n");
}
void Game()
{
	//printf("这是玩游戏的逻辑代码\n");
	//rand()%100-->[0-100)    rand()%100+1->[1-100]
	int randNum = rand() % 100 + 1;//随机数 0 - 32767
	int num = 0;
	//printf("randNum==%d\n",randNum);
	while (1)
	{
		printf("请输入你要猜的数字-》");
		scanf("%d", &num);
		if (num > randNum)
		{
			printf("猜大了\n");
		}
		else if (num < randNum)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你,猜对了\n");
			break;
		}
	}
}
//int main() {
//	int num = 0,result = 0;
//	Meum();
//	printf("请输入你的选择:");
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
//			printf("请输入正确的选项:");
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
		printf("请输入你的操作：》");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入正确的操作数\n");
			break;
		}
	} while (input);
	return 0;
}