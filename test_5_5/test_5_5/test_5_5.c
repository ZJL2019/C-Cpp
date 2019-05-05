#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define P 1
#define N 2
int Drinkcole(int x)
{
	int ret = x / N;
	int empty = x / N + x%N;
	if (empty > 1)
	{
		return ret + Drinkcole(empty);
	}
	else
	{
		return ret;
	}
}
int main()
{
	int p = 0;
	printf("please enter a number of money:>\n");
	scanf("%d", &p);
	int n = p / P;
	int number = n+Drinkcole(n);
	printf("There are %d bottle cole!\n",number);
	system("pause");
	return 0;
}