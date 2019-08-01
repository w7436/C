#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�˵�
void Menu(){
	printf("********************\n");
	printf("*******������*******\n");
	printf("******1.����Ϸ******\n");
	printf("******2.������******\n");
	printf("********************\n");
}
//��ӡ����
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
	//��
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (((a[i][0] == a[i][1]) && (a[i][1] == a[i][2])) && ((a[i][0] != ' ')))
		{
			return 1;
		}
	}
	//��
	for (i = 0; i < clo; i++)
	{
		if ((a[0][i] == a[1][i]) && (a[1][i] == a[2][i]) && ((a[0][i] != ' ')))
		{
			return 1;
		}
	}
	//��
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
		if(flag == 0) {    //������ӣ������������ӣ�flagΪ1��
			printf("���������꣺");
			scanf("%d%d", &i, &j);
			if ((i >= 0) && (i <= 2) && (j >= 0) && (j <= 2)) {
				if (a[i][j] == ' ') {
					 a[i][j] = 'O';
					 flag = 1;
					chessboard(a);	  //ˢ��һ������
					m = Juige(a);
					if (m==1) {
						if (a=='O') {
						}
						printf("���ʤ");
						break;
					}
					continue;
				}
				if (a[i][j] != ' ') {
					printf("����������������룺\n");
				}
			}
		}
		if(flag == 1) {   //����������ӣ�flagΪ0�����ֵ������ж�
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
					printf("����ʤ");
					break;
				}
				flag = 0;
				break;
			}
		}
	}
	printf("��Ϸ����\n");
}
int main() {
	int item = 0,m=0;
	Menu();
	printf("��ѡ��ѡ��:");
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
