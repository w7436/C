#define _CRT_SECURE_NO_WARNINGS
void menu()
{
	printf("*******************\n");
	printf("******0.exit*******\n");
	printf("******1.play*******\n");
	printf("*******************\n");
}
void InitBoard(char board[][ROW], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			board[i][j] = set;
		}
	}
}
void ShowBoard(char board[][ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col - 1; j++)
			{
				printf("___");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[][ROW], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		printf("请输入你的坐标：");
		scanf("%d %d", &x, &y);
		if (x>=1&&x<=row&&y>=1&&y<=col) {
			if (board[x - 1][y - 1] == ' ') {
			}
			board[x-1][y-1] = 'X';
			break;
		}
		else
		{
			printf("位置被占用，请重新输入：");
		}

	}
}
void Game(char board[][ROW], int row, int col) {

}
//判断胜出
char Iswin(char board[][ROW], int row, int col) {
	//行
	for (int i = 0; i < col; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ') {
			return board[i][0];
		}
	}
	//列
	for (int j = 0; j < col; j++) {
		if (board[0][j]== board[1][j]&& board[1][j]== board[2][j]&& board[0][j]!=' ') {
			return board[0][j];
		}
	}
	//×
	if (board[0][0]== board[1][1]&& board[1][1]== board[2][2]&& board[2][2]!=' ') {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ') {
		return board[0][2];
	}
	//平局
	if (Isfull) {
		return 'Q';
	}
	//谁也没赢
	return ' ';
}

static int Isfull(char board[][ROW], int row, int col) {
	int i = 0;
	int j = 0;
	for (; i < row;i++) {
		for (j = 0; j < col;j++) {
			if (board[i][j]!=' ') {
				return 1;
			}
		}
	}
	return 0;
}
