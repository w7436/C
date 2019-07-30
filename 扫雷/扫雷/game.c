#define _CRT_SECURE_NO_WARNINGS
#include "game,h.h"

void menu(){
	printf("********0.exit********\n");
	printf("********1.play********\n");
	printf("**********************\n");
}
//打印棋盘
void Show(char board[][ROWS], int row, int col){
	for (int i = 0; i < ROWS; i++) {
		//行，打印数字1-9
		for (int i = 1; i <= ROW;i++) {
			printf("%d ", i);
		}
		printf("\n");
		for (int j = 0; j < ROWS;j++) {
			printf("%d ", j + 1);
			printf("%d ", board[i+1][j+1]);
		}
	}
}
//棋盘初始化
void InitBoard(char board[][ROWS], int row, int col, char set) {
	for (int i = 0; i < ROWS;i++) {
		for (int j = 0; j < ROWS;j++) {
			board[i+1][j+1] = set;
		}
	}
}
//设置雷
void SetMine(mine, row, col) {

}
void FindMine(char mine[][ROWS], char mineInfo[][ROWS], int row, int col) {

}
void Game(char board[][ROWS], int row, int col) {
	char mine[ROWS][COLS] = { 0 };
	char mineinfo[ROWS][COLS] = { 0 };  //存放雷的信息
	//初始化
	//打印
	//设置雷
	SetMine(mine, ROW, COL);
	//找雷 
}