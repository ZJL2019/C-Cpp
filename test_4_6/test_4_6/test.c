#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count_bit1(int x)
{
	int count = 0;
	while (x)
	{
		if (x % 2 == 1)
		{
			count++;
		}
		x = x / 2;
	}
	return count;
}
int count_bit2(int x)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((x >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int count_bit3(int x)//判断一个二进制中有多少个1
{
	int count = 0;
	while (x)
	{
		x = x&(x - 1);
		count++;
	}
	return count;
}
void fun(int a[])//形参为指针，类型为整型，数组指针
{
	printf("%d\n", sizeof(a));//大小为4
}

struct str
{
	char name[60];
	int age;
	char sex[5];
	double score;
};



int main()
{
	unsigned char a = -1;//1111  1111  最高位为符号位
	printf("%u\n", a);
	/*struct str tom = { "tom", 'm', 20, 80 };
	struct str *p=&tom;


	printf("%s\n", tom.name);
	printf("%s\n", (*p).name);



	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	////i = a++&&b++&&d++;//逻辑与，第一个条件为假不再判断
	//i=a++||++b||d++;//逻辑或，第一个条件为假继续判断
	//printf("  a=%d\n  b=%d\n  c=%d\n  d=%d\n", a, b, c, d);
	

	//float f = 3.14;
	//if (f-3.14>x&&f-3.14<y)//float判断不能直接==


	/*int a = 0;
	int *p = &a;
	if (NULL == p)*/

	/*int a = 100;
	if (100 == a)*/


	///*int x= ++a;
	//int y = --a;*/
	//int x= a++;
	////int y = a--;
	//printf("%d\n", a);
	//printf("%d,%d\n", x);


	//int a[100];
	//printf("%d\n", sizeof(a));
	//fun(a);//数组传参发生降维


	//int x = 1;
	//int *p = &x;
	//printf("%d\n", sizeof(p));//指针在32位下为4个字节，64位下为8个字节


	//printf("%d\n", sizeof(x));//sizeof为关键字，不是函数，尽量使用带括号
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof x);//正确
	//printf("%d\n", sizeof  int);//错误


	//printf("%d\n", x);
	//printf("0x%p\n", x);//十六进制

	//x = -x;
	//printf("%d\n", x);


	////if (x)//!逻辑按位取反
	//if (!x)
	//{
	//	printf("AAAAAAAAAAAAAAAAA");
	//}
	//else
	//{
	//	printf("BBBBBBBBBBBBBBBBBB");
	//}


	/*int x=1234;
	printf("x二进制中有%d个1\n", count_bit1(x));*/
	//int x = 1;
	//int y = 2;
	//printf("before:x=%d,y=%d\n", x, y);
	//x = x^y;
	//y = x^y; //x^y^y   y=1	int																				   
	//x = x^y; //x^y^y   y=2
	//printf("%d,%d\n", x, y);																												   
	system("pause");
	return 0;
}