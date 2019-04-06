#define _CRT_SECURE_NO_WARNINGS 1
#include "three_chess.h"

void ShowUI()
{
	printf("##################################\n");
	printf("## 1. Play              2. Exit ##\n");
	printf("##################################\n");
	printf("Please Select:> ");
}
void ComputerMove(char board[][COL], int row, int col)
{
	while (1){
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' '){
			board[x][y] = '0';
			break;
		}
	}
}
void PlayerMove(char board[][COL], int row, int col)
{
	int x, y;
	while (1){
		printf("Please Enter Your Pos(x,y):>  ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col){
			if (board[x - 1][y - 1] == ' '){
				board[x - 1][y - 1] = 'X';
				break;
			}
			else{
				printf("Enter Pos Is Not OK, Try Again!\n");
			}
		}
		else{
			printf("Enter Error, Try Again!\n");
		}
	}
}
char Judge(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (; i < row; i++){
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && \
			board[i][0] != ' '){
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++){
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && \
			board[0][i] != ' '){
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && \
		board[1][1] != ' '){
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && \
		board[1][1] != ' '){
		return board[1][1];
	}

	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (board[i][j] == ' '){
				return 'N';
			}
		}
	}
	return 'E';
}

void ShowBoard(char board[][COL], int row, int col)
{
	printf("    1   2   3\n");
	printf("----------------\n");
	int i = 0;
	int j = 0;
	for (; i < row; i++){
		printf("%d |", i+1);
		for (j=0; j < col; j++){
			printf(" %c |", board[i][j]);
		}
		printf("\n----------------\n");
	}
	printf("%\n");
}
void Game()
{
	char board[ROW][COL];
	memset(board, ' ', sizeof(board));
	char result = 'N';
	srand((unsigned long)time(NULL));

	while (1){
		system("cls");
		ComputerMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		result = Judge(board, ROW, COL);
		if (result != 'N'){//'X' 'O' 'E' 'N'
			break;
		}
		PlayerMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		result = Judge(board, ROW, COL);
		if (result != 'N'){//'X' 'O' 'E' 'N'
			break;
		}
	}
	switch (result){
	case 'X':
		printf("You Win! :)\n");
		break;
	case 'O':
		printf("You Lose, Computer Win!\n :(");
		break;
	case 'E':
		printf("Æ½¾Ö£¬¹§Ï²£¡\n");
		break;
	default:
		break;
	}
}