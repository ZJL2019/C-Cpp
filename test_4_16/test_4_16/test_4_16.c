#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

//third
//int (*arr)[20] 数组指针  int *arr[20]指针数组
#define ROW 5
void  Pascal(int(*arr)[ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j || j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
}

void Show(int(*arr)[ROW])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-5d", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[ROW][ROW] = { 0 };
	Pascal(arr, ROW, ROW);
	Show(arr);
	system("pause");
	return 0;
}






//second
//void Killer()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("killer is %c\n", killer);
//		}
//	}
//}
//int main()
//{
//	Killer();
//	system("pause");
//	return 0;
//}






//first
//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0, E = 0;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if ((2 == B) + (3 == A) == 1 &&
//							(2 == B) + (4 == E) == 1 &&
//							(1 == C) + (2 == D) == 1 &&
//							(5 == C) + (3 == D) == 1 &&
//							(4 == E) + (1 == A) == 1)
//						{
//							if (A*B*C*D*E == 120)
//							{
//								printf("A=%d\tB=%d\tC=%d\tD=%d\tE=%d\n", A, B, C, D, E);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}