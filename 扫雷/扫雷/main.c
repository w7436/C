#define _CRT_SECURE_NO_WARNINGS
#include "game,h.h"
int main()
{
	/*int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���������ѡ�� -��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������ȷ������\n");
			break;
		}
	} while (input);*/
	char board[9][9] = { 0 };
	InitBoard(board, 9, 9,'*');
	Show(board, 9, 9);
	return 0;
}