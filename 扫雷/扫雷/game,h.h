#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  ROW 9
#define  COL   9

#define  ROWS   ROW+2
#define  COLS    COL+2

#define MINE_NUM 10
void menu();
//��ʼ������
void InitBoard(char board[][ROWS], int row, int col, char set);
//��ӡ����
void Show(char board[][ROWS], int row, int col);
//������
void SetMine(char board[][ROWS], int row, int col);
//ɨ��
void FindMine(char mine[][ROWS], char mineInfo[][ROWS], int row, int col);