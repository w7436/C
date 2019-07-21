#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*      系统随机给出一个1-100的数字，让用户来猜，
　　　如果猜低则系统提示 low，若猜高则系统提示 high
　　　如果猜中则系统提提示you are right!*/
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
		printf("请输入你猜的数:");
		scanf("%d", &a);
		if (i == 10) {
			printf("游戏结束！\n");
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
	printf("请输入你的选择:");
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
			printf("请输入正确的选项:");
			scanf("%d", &num);
		}
	}
	return 0;
}