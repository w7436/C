#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS  ROW+2
#define COLS    COL+2

#define MINE_NUM 1
//���̳�ʼ��
void InitBoard(char board[][ROWS], int row, int col, char set);
//��ӡ����
void Show(char board[][ROWS], int row, int col);
//������
void SetMine(char mine[][ROWS], int row, int col);
//����
void FindMine(char mine[][ROWS], char mineInfo[][ROWS], int row, int col);
//���δ�ȵ��ף�����Ϣ������ʾ
void Show_area(char mineInfo[][ROWS], char mine[][ROWS], int x, int y);

void Game();

void menu();