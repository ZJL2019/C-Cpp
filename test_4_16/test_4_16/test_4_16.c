#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>





//在屏幕上打印杨辉三角。

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





//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
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





//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

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