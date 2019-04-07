#ifndef _MINE_H_
#define _MINE_H_


#include<stdio.h>
#include<string.h>
#include <windows.h>
#include <time.h>
#pragma warning(disable:4996)


#define ROW 12
#define COL 12
#define MINES 20


void Menu();
void SetMine(char mine_board[][COL], int row, int col);
int GetMineNum(char mine_board[][COL], int i, int j);
void ShowBoard(char show_board[][COL], int row, int col);
void PlayGame(char show_board[][COL], char mine_board[][COL], int row, int col);
void Game();

#endif