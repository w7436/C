#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//�˵���
void menu(){
	printf("**********************\n");
	printf("********0.exit********\n");
	printf("********1.play********\n");
	printf("**********************\n");
}
//��ӡ����
void Show(char board[][ROWS], int row, int col){
	int i = 0; 
	int j = 0;
	printf("-----------------------------\n");
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
	printf("---------------------------\n");
}
//���̳�ʼ��
void InitBoard(char board[][ROWS], int row, int col, char set) {
	int i = 0;
	int  j = 0;
	for (i = 0; i < row;i++) {
		for (j = 0; j < col;j++) {
			board[i][j] = set;
		}
	}
}
//������
void SetMine(char mine[][ROWS], int row, int col) {
	int count = MINE_NUM;
	int x = 0;
	int y = 0;
	while (count!=0) {
		x = rand() % row + 1;//[1-10)
		y = rand() % col + 1;
		if (mine[x][y]=='0') {
			mine[x][y] = '1'; //������Ϊ1
			count--;
		}
	}
}
//�ַ�1-�ַ�0=ʮ��������1
int GetMineCout(char mine[][ROWS], int x, int y) {
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] 
		+ mine[x + 1][y] + mine[x + 1][y + 1]-8*'0';
}
//����
void FindMine(char mine[][ROWS], char mineInfo[][ROWS], int row, int col) {
	int x = 0;
	int y = 0;
	int count = 0;
	//���ɨ�׵Ĵ���
	while (count<(row*col-MINE_NUM)) {
		printf("���������꣺");
		scanf("%d%d", &x, &y);
		if (x>=1&&x<=row&&y>=1&&y<=col) {
			if (mine[x][y]=='1') {
				printf("�㱻ը����\n");
				break;
			}
			else {
				int ret = GetMineCout(mine, x, y);
				mineInfo[x][y] = ret + '0';
				Show(mineInfo, row, col);
				count++;
			}
		}
		else
		{
			printf("���겻�Ϸ�\n");
		}
	}
}
void Game(char board[][ROWS], int row, int col) {
	char mine[ROWS][COLS] = { 0 };//�����
	char mineInfo[ROWS][COLS] = { 0 };  //����׵���Ϣ
	InitBoard(mineInfo, ROWS, COLS, '0'); //��ʼ������
	InitBoard(mineInfo, ROWS, COLS,'*');
	Show(mineInfo, ROW, COL);//��ӡ
	SetMine(mine, ROW, COL);//������
	FindMine(mine, mineInfo, ROW, COL);//���� 
}