#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

int  count_one_bits1(unsigned int n)
{
	int count = 0;
	while (n != 0)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n >> 1;
	}
	return count;
}

int  count_one_bits2(unsigned int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}


int  count_one_bits3( int n)//best
{
	int count = 0;
	while (n!=0)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}



void Function1(int num)
{
	printf("even are: ");
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("odd are:  ");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
}



int CalcDiff(int m, int n)
{
	int tmp = m^n;
	int count = 0;
	while (n != 0)
	{
		tmp = tmp&(tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m =0, n = 0;
	int ret = CalcDiff(7, 4);
	printf("%d\n",ret );
	/*printf("%d\n", count_one_bits1(n));
	printf("%d\n", count_one_bits2(n));
	printf("%d\n", count_one_bits3(n));*/
	//Function1(n);
	system("pause");
	return 0;
}