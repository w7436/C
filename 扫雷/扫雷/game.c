#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
int count = 0;
//菜单栏
void menu(){
	printf("**********************\n");
	printf("********0.exit********\n");
	printf("********1.play********\n");
	printf("**********************\n");
}
//打印棋盘
void Show(char board[][ROWS], int row, int col){
	int i = 0; 
	int j = 0;
	printf("---------------------------\n");
	for (i = 0; i <= row;i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row;i++) {
		printf("%d ", i);
		for (j = 1; j <= col;j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------------------------\n");
}
//棋盘初始化
void InitBoard(char board[][ROWS], int row, int col, char set) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row;i++) {
		for (j = 0; j < col;j++) {
			board[i][j] = set;
		}
	}
}
//设置雷
void SetMine(char mine[][ROWS], int row, int col) {
	int count = MINE_NUM;
	int x = 0;
	int y = 0;
	while (count!=0) {
		x = rand() % row + 1;//[1-10)
		y = rand() % col + 1;
		if (mine[x][y]=='0') {
			mine[x][y] = '1'; //将雷设为1
			count--;
		}
	}
}
//字符1-字符0=十进制数字1
int GetMineCout(char mine[][ROWS], int x, int y) {
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] 
		+ mine[x + 1][y] + mine[x + 1][y + 1]-8*'0';
}
//找雷
void FindMine(char mine[][ROWS], char mineInfo[][ROWS], int row, int col) {
	int x = 0;
	int y = 0;
	while (count<(row*col-MINE_NUM)) {
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (x>=1&&x<=row&&y>=1&&y<=col) {
			if (mine[x][y]=='1') {
				printf("你被炸死了\n");
				break;
			}
			else {
				
				Show_area(mineInfo, mine, x, y);
			}
		}
		else
		{
			printf("坐标不合法\n");
		}
	}
}
//如果没有踩中雷，则展示其周围8个格子的信息，从而提高扫雷效率
void Show_area(char mineInfo[][ROWS],char mine[][ROWS],int x, int y) {
	int ret = GetMineCout(mine, x, y);
	mineInfo[x][y] = ret + '0';
	if (mineInfo[x][y]=='0') {			//代表周围格子没有雷
		mineInfo[x -1][y -1] = mine[x - 1][y - 1];
		mineInfo[x - 1][y] = mine[x - 1][y];
		mineInfo[x - 1][y + 1] = mine[x - 1][y + 1];
		mineInfo[x][y - 1] = mine[x][y - 1];
		mineInfo[x][y + 1] = mine[x][y + 1];
		mineInfo[x + 1][y - 1] = mine[x + 1][y - 1];
		mineInfo[x + 1][y] = mine[x + 1][y];
		mineInfo[x + 1][y + 1] = mine[x + 1][y + 1];
		Show(mineInfo, ROW, COL);
		count += 8;
	}
	else{   //代表格子周围有雷，则不展示其周围的信息
		Show(mineInfo, ROW ,COL);
		count++;
	}
}
void Game() {
	char mine[ROWS][COLS] = { 0 };//存放雷
	char mineInfo[ROWS][COLS] = { 0 };  //存放雷的信息
	InitBoard(mine, ROWS, COLS, '0'); //初始化棋盘
	InitBoard(mineInfo, ROWS, COLS,'*');//展示给玩家
	Show(mineInfo, ROW, COL);//打印
	SetMine(mine, ROW, COL);//设置雷
	FindMine(mine, mineInfo, ROW, COL);//找雷 
}