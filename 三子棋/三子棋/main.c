#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//菜单
void Menu(){
	printf("********************\n");
	printf("*******三子棋*******\n");
	printf("******1.玩游戏******\n");
	printf("******2.不玩了******\n");
	printf("********************\n");
}
//打印棋盘
void chessboard(char a[][3]) {   
	int i = 0, j = 0;
	printf("-------\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (j == 0) {
				printf("|%c|", a[i][j]);
				continue;
			}
			if (j == 1) {
				printf("%c|", a[i][j]);
				continue;
			}
			if (j == 2) {
				printf("%c|\n", a[i][j]);
				continue;
			}
		}
		printf("-------\n");
	}
}


int Juige(char a[][3])
{
	int row = 3, clo = 3;
	//行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (((a[i][0] == a[i][1]) && (a[i][1] == a[i][2])) && ((a[i][0] != ' ')))
		{
			return 1;
		}
	}
	//列
	for (i = 0; i < clo; i++)
	{
		if ((a[0][i] == a[1][i]) && (a[1][i] == a[2][i]) && ((a[0][i] != ' ')))
		{
			return 1;
		}
	}
	//叉
	if ((a[0][0] == a[1][1]) && (a[1][1] == a[2][2]) && ((a[0][0] != ' ')))
	{
		return 1;
	}
	if ((a[0][2] == a[1][1]) && (a[1][1] == a[2][0]) && ((a[0][2] != ' ')))
	{
		return 1;
	}
	return 0;
}

void Game(char a[][3]){
	int flag = 0,m=0;
	int i = 0, j = 0;
	while (1) {
		if(flag == 0) {    //玩家落子，当玩家完成落子，flag为1，
			printf("请输入坐标：");
			scanf("%d%d", &i, &j);
			if ((i >= 0) && (i <= 2) && (j >= 0) && (j <= 2)) {
				if (a[i][j] == ' ') {
					 a[i][j] = 'O';
					 flag = 1;
					chessboard(a);	  //刷新一次棋盘
					m = Juige(a);
					if (m==1) {
						if (a=='O') {
						}
						printf("玩家胜");
						break;
					}
					continue;
				}
				if (a[i][j] != ' ') {
					printf("输入错误，请重新输入：\n");
				}
			}
		}
		if(flag == 1) {   //电脑完成落子，flag为0，随机值需进行判断
			int i = 0, j = 0;
			i = rand() % 3;
			j = rand() % 3;
			while (a[i][j] == ' ') {
				a[i][j] = 'X';
				system("cls");
				chessboard(a);
				m = Juige(a);
				if (m == 1) {
					if (a == 'X') {
					}
					printf("电脑胜");
					break;
				}
				flag = 0;
				break;
			}
		}
	}
	printf("游戏结束\n");
}
int main() {
	int item = 0,m=0;
	Menu();
	printf("请选择选项:");
	scanf("%d", &item);
	srand((unsigned int)time(NULL));
	char a[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j] = ' ';
		}
	}
	system("cls");
	chessboard(a);
	Game(a);
	printf("\n");
	return 0;
}
