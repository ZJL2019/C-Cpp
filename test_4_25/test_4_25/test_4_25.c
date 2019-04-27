#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
void print_arr1(int arr[3][5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0; i < row; i++)
	{
		for (j=0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int(*arr)[5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void test1(int *a[])//(int **a)
{

}

void print(int *p, int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%d ", *(p + i));
	}
}

void test()
{
	printf("hello test\n");
}

void Menu()
{
	printf("#######################\n");
	printf("##1.add          2.sub##\n");
	printf("##3.mul          4.div##\n");
	printf("                0.exit##\n");
	printf("#######################\n");
	printf("please enter :\n");

}
int my_add(int x, int y)
{
	return x + y;
}
int my_sub(int x, int y)
{
	return x - y;
}
int my_mul(int x, int y)
{
	return x*y;
}
int my_div(int x, int y)
{
	if (0 == y)
	{
		printf("error!\n");
		return -1;
	}
	return x / y;
}
int main()
{
	int op=0;
	int x = 0;
	int y = 0;

	int(*fun[5])(int, int) = { NULL, my_add, my_sub, my_mul, my_div };//函数指针数组定义，数组初始化

	while (1)
	{
		Menu();
		scanf("%d", &op);
		if (op >= 1 && op <= 4)
		{
			int x;
			int y;
			printf("please enter your data for cal<x,y>:");
			scanf("%d%d", &x, &y);
			int z=fun[op](x, y);
			printf("result: %d\n", z);
		}
		else if (op == 0)
		{
			printf("Bye!\n");
			break;
		}
		else
		{
			printf("enter error!try again!\n");
		}
	}




	//void(*p[5])();//函数指针数组
	//void(*p[5])()




	//void(*p)() = test;
	//printf("%p\n", p);
	//test();
	//(*p)();
	//p();//调用test函数



	//printf("%p\n", test);
	//printf("%p\n", &test);//函数入口地址


	/*int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = a;
	int num = sizeof(a) / sizeof(a[0]);
	print(a, num);*/


	/*int *a[5];
	test1(a);*/

	/*int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print_arr1(arr, 3, 5);
	print_arr2(arr, 3, 5);*/

	/*int a[100] = { 0 };
	int (*p)[100] = a;*///warning C4047: “初始化”:“int (*)[100]”与“int *”的间接级别不同
	//int a[99] = { 0 };
	//int(*p)[100] = &a; //warning C4048 : “int(*)[100]”和“int(*)[99]”数组的下标不同

	//int n = 9;
	//float*fp = (float*)&n;//"1234"-->1234
	//printf("%d\n", n);//9
	//printf("%d\n", *fp);//0
	//*fp = 9.0;
	
	system("pause");
	return 0;
}