#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<assert.h>


cmpInt(const void *xp, const void *yp)//在调用时，qsqrt通常传送的是数据地址
{
	int*x = (int*)xp;
	int*y = (int*)yp;

	if (*x > *y)
	{
		return 1;
	}
	else if (*x < *y)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}


void comDouble(const void *xp, const void *yp)
{
	double *x = (double*)xp;
	double *y = (double*)yp;

	if (*x > *y)
	{
		return 1;
	}
	else if (*x < *y)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}


void swap(char *x, char *y, int size)
{
	int i = 0;
	for (; i < size; i++)
	{
		char tmp = *x;
		*x = *y;
		*y = tmp;
		x++, y++;
	}
}




void Myqsort(void *base, int num, int size, \
	int(*cmp)(const void*, const void*))//qsort 实现
{
	assert(base);
	assert(cmp);

	char *start = (char*)base;
	int i = 0;
	for (; i < num-1; i++)
	{
		int j = 0;
		int flag = 0;
		for (; j < num-1; j++)
		{
			if (cmp(start+size*j,start+(j+1)*size)>0)
			{
				flag = 1;
				swap(start + size*j, start + (j + 1)*size,size);
			}
		}
		if (!flag)
		{
			break;
		}
	}
}


void show(double a[], int num)
{
	int i = 0;
	for (; i < num; i++)
	{
		printf("%f ", a[i]);
	}
	printf("\n");
}

int main()
{
	int a[] = { 2, 2, 62, 95, 6, 56, 26, 655, 5, 85, 62, 60, 26 };
	double d[] = { 6.3, 5.4, 1.2, 0.5, 7.5, 2.3 };
	int num = sizeof(d) / sizeof(d[0]);
	show(d, num);
	//qsort(d, num, sizeof(double), comDouble);
	Myqsort(d, num, sizeof(double), comDouble);

	show(d, num);
	//int num = sizeof(a) / sizeof(a[0]);
	//show(a, num);
	//qsort(a, num, sizeof(int), cmpInt);
	//show(a, num);
	system("pause");
	return 0;
}