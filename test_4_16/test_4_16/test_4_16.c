#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

//third
int main()
{
	int i, j, n;
	int a[100][100] = { 0 };
	do
	{
		printf("please enter a number:");
		scanf("%d", &n);
	} while (n<1 || n>100);
	for (i = 0; i < n; i++)
	{
		a[i][0] = 1;
	}
	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}






//second
//int main()
//{
//	char killer=0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("killer is %c\n", killer);
//		}
//	}
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
//						if ((2 == B && 3 != A) || (2 != B && 3 == A))
//						{
//							if ((2 == B && 4 != E) || (2 != B && 4 == E))
//							{
//								if ((1 == C && 2 != D) || (1 != C && 2 == D))
//								{
//									if ((5 == C && 3 != D) || (5 != C && 3 == D))
//									{
//										if ((4 == E && 1 != A) || (4 != E && 1 == A))
//										{
//											if ((A != B) && (A != C) && (A != D) && (A != E) && (B != C) && \
//												(B != D) && (B != E) && (C != D) && (C != E) && (D != E))
//											{
//												printf("A=%d\tB=%d\tC=%d\tD=%d\tE=%d\n", A, B, C, D, E);
//											}
//								
//										}
//									}
//								}
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