#define _CRT_SECURE_NO_WARNINGS
#include "game,h.h"
int main()
{
	/*int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你的选择 -》");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入正确的数字\n");
			break;
		}
	} while (input);*/
	char board[9][9] = { 0 };
	InitBoard(board, 9, 9,'*');
	Show(board, 9, 9);
	return 0;
}