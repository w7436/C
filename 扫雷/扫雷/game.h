#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS  ROW+2
#define COLS    COL+2

#define MINE_NUM 1
//ÆåÅÌ³õÊ¼»¯
void InitBoard(char board[][ROWS], int row, int col, char set);
//´òÓ¡¼üÅÌ
void Show(char board[][ROWS], int row, int col);
//ÉèÖÃÀ×
void SetMine(char mine[][ROWS], int row, int col);
//ÕÒÀ×
void FindMine(char mine[][ROWS], char mineInfo[][ROWS], int row, int col);

