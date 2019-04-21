#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}


int main(void)
{
	//void x  错误  无类型无大小无法开辟
	//void*x;//空类型指针，有大小4字节
	//int a = 10;
	//void*x = &a;  //无法解引用
	//int a = 20;
	//int b = -10;
	//unsigned int a = 1;//赋值32个bit位，赋给地址最低的内容。其余清0
	//*(unsigned char*)&a;//强转
	//int ret = check_sys();
	//printf("%d\n", ret);

	//char a = -1;//有符号  1111 1111
	//signed char b = -1;//有符号   1000 0001   1111 1110  1111 1111
	//unsigned char c = -1; //1111 1111 255   
	//printf("a=%d,b=%d,c=%d", a, b, c);//有符号类型打印,char 与signed char 有符号  按整型打印，发生整形提升，看自己的类型有符号补符号位，有符号补一，无符号补零
	//char a = 128;//1 1000 0000    1 0111 1111      1 1000 0000
	//printf("%u\n", a);
	/*int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);*/
	//unsigned int i;//0~2^31-1  不可能小于0
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u\n", i);
	//	Sleep(1000);
	//}
	char a[1000];
	int i;
	for (i = 0; i<1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	system("pause");
	return 0;
}