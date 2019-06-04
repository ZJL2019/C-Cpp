//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h> 
//#include<errno.h>
//
//int main()
//{
//
//	char *p = malloc(sizeof(char)* 100);
//	if (!p)
//	{
//		printf("%d :%s\n", errno, strerror(errno));
//	}
//	memset(p, 'A', sizeof(char)* 100);
//	char *q = realloc(p, sizeof(char)* 50);
//	if (!q)
//	{
//		printf("%d :%s\n",errno,strerror(errno));
//	}
//	printf("%p, %p", p, q);
//	int i = 0;
//	for (i = 0; i < 50; i++)
//	{
//		printf("%c ", q[i]);
//	}
//	printf("\n");
//	
//	free(q);
//	//printf("Please Enter  n:");
//	//int n = 0;
//	//scanf("%d", &n);
//	////int *p = (int*)malloc(sizeof(int)*n);
//	//int *p = (int*)calloc(n, sizeof(int));
//	//if (!p)
//	//{
//	//	printf("%d : %s\n", errno, strerror(errno));
//	//	return 1;
//	//}
//	//int i = 0;
//	//for (; i < n; i++)
//	//{
//	//	p[i] = i;
//	//}
//	//printf("%p\n", p);
//	//free(p);
//	//printf("%p\n", p);//free 后中指针不发生变化，变化的是p与开辟的内存之间的关系
//	system("pause");
//	return 0;
//}




////枚举
//enum color
//{
//	RED,//整型 值从0开始 依次加一
//	BLACK,
//	BLUE,
//	GREEN,
//	YELLOW
//};
//
////位段
//struct A{
//	int _a : 2;//使用你所开辟的32个bit位中的2个位
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
////联合体
//union un{
//	char a;
//	char c;
//};
//
//
//int main()
//{
//
//	/*char *p = malloc(sizeof(char)* 100);
//	if (!p)
//	{
//		printf("malloc error!\n");
//		return 1;
//	}
//	memset(p, 'A', sizeof(char)* 100);
//	char *q = realloc(p, sizeof(char)* 50);
//	if (!q)
//	{
//		printf("realloc error!\n");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 50; i++)
//	{
//		printf("%c ", q[i]);
//	}
//	free(q);
//	q = NULL;*/
//
//
//
//	union un obj;
//	obj.c = 0;
//	obj.c = 1;
//	printf("%d\n", obj.a);//联合体大小为联合体中最大成员的大小
//
//	//枚举
//	enum color c=RED;
//	//位段的内存分配
//	struct S s = { 0 };
//	printf("%d", sizeof(s));
//	memset(&s, 0, sizeof(s));
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//
//	system("pause");
//	return 0;
//}