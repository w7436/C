#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
int main(){
		int input = 0;
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("���������ѡ�� -��");
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
				printf("��������ȷ������\n");
				break;
			}
		} while (input);
		return 0;
	}
