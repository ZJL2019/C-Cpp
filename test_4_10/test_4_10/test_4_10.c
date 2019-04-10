#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
1      A==>C     1
2     A==>B   A==>C  B==>C     3
3     A==>C  A==>B  C==>B    A==>C    B==>A
B==>C  A==>C         7
4

64      2^64-1
*/
//ººÂÞËþ
void Move(char pos1, char pos2)
{
	printf("%c-->%c\n", pos1, pos2);
}
void Hanoi(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		Move(pos1, pos3);
	}
	else
	{
		Hanoi(n - 1, pos1, pos3, pos2);
		Move(pos1, pos3);
		Hanoi(n - 1, pos2, pos1, pos3);
	}
}
int main()
{
	Hanoi(3, 'A', 'B', 'C');
	system("pause");
	return 0;
}