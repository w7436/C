#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS  ROW+2
#define COLS    COL+2

#define MINE_NUM 1
//棋盘初始化
void InitBoard(char board[][ROWS], int row, int col, char set);
//打印键盘
void Show(char board[][ROWS], int row, int col);
//设置雷
void SetMine(char mine[][ROWS], int row, int col);
//找雷
void FindMine(char mine[][ROWS], char mineInfo[][ROWS], int row, int col);
//如果未踩到雷，对信息进行显示
void Show_area(char mineInfo[][ROWS], char mine[][ROWS], int x, int y);

void Game();

void menu();