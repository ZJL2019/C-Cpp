#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

int Add(int x, int y)
{
	return x + y;
}


int MyStrlen(const char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	//"abcdef"=1+'bcdef''
	else 
		return 1 + MyStrlen(str + 1);
}


int Print(unsigned int x)
{
	if (x > 9)
	{
		Print(x / 10);
	}
	printf("%d ", x % 10);
}


int Fact(unsigned int x)
{
	if (x <= 1)
	{
		return 1;
	}
	else 
		return x*Fact(x - 1);
}


int FactOne(unsigned int x)
{
	unsigned int result = 1;
	unsigned int i = 1;
	for (; i <= x; i++)
	{
		result *= i;
	}
	return result;
}

int Fib(unsigned int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
		return Fib(n - 1) + Fib(n - 2);
}


int FibOne(unsigned int n)
{
	int first = 1;
	int second = 1;
	int third = 1;
	unsigned int i = 2;
	while (i < n)
	{
		third = second + first;
		first = second;
		second = third;
		i++;
	}
	return third;
}