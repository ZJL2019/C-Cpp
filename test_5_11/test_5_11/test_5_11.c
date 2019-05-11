#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
//int main()
//{
	//一维数组

	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));//4        第一个元素的地址
	//printf("%d\n", sizeof(*a));//4           首元素
	//printf("%d\n", sizeof(a + 1));//4        第二个元素的地址
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4           数组的地址
	//printf("%d\n", sizeof(*&a));//16         整个数组
	//printf("%d\n", sizeof(&a + 1));//4       下一个数组的地址
	//printf("%d\n", sizeof(&a[0]));//4        地址
	//printf("%d\n", sizeof(&a[0] + 1));//4    地址


	//字符数组

	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4   首元素地址
	//printf("%d\n", sizeof(*arr));//1      首元素
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4   第二个元素的地址


	//printf("%d\n", strlen(arr));// >=6  ex:10
	//printf("%d\n", strlen(arr + 0));//  >=6   10
	////printf("%d\n", strlen(*arr));//   X
	////printf("%d\n", strlen(arr[1]));//  X
	//printf("%d\n", strlen(&arr));//  >=6  10   
	////warning C4047: “函数”:“const char *”与“char (*)[6]”的间接级别不同
	//printf("%d\n", strlen(&arr + 1));//     4    跳过整个数组
	////warning C4047: “函数”:“const char *”与“char (*)[6]”的间接级别不同
	//printf("%d\n", strlen(&arr[0] + 1));//   9   跳过第一个元素



	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4
	//
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//X
	////printf("%d\n", strlen(arr[1]));//X
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//unknow
	//printf("%d\n", strlen(&arr[0] + 1));//5


	//char *p = "abcdef";//字符常量区   *p在栈上开辟
	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p + 1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p + 1));//4
	//printf("%d\n", sizeof(&p[0] + 1));//4
	//
	//
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//X
	////printf("%d\n", strlen(p[0]));//X
	//printf("%d\n", strlen(&p));//将p的地址看作成字符串  unknown
	//printf("%d\n", strlen(&p + 1));//将p+1的地址看作成字符串  unknown
	//printf("%d\n", strlen(&p[0] + 1));//5




	//二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16
	//printf("%d\n", sizeof(a[0] + 1));//4   第一个数组里的第二个整型元素的地址
	//printf("%d\n", sizeof(*(a[0] + 1)));//4   第一个数组里的第二个整型元素
	//printf("%d\n", sizeof(a + 1));//4     第二个一维数组的地址
	//printf("%d\n", sizeof(*(a + 1)));//16   第二个一维数组
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16  第二个一维数组
	//printf("%d\n", sizeof(*a));//16    第一个一维数组
	//printf("%d\n", sizeof(a[3]));//16   越界可读取，不可写入

	//笔一
	//int a[5] = { 1, 2, 3, 4, 5 };
	//int *ptr = (int *)(&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1));//2，5
	
//	system("pause");
//	return 0;
//}

////笔二
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;//20
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014   加上结构体指针的大小
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001    加一
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004    强转int  加四
//
//	system("pause");
//	return 0;
//}



//笔三
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4,02000000  
//	system("pause");
//	return 0;
//}


//笔四
//int main(int argc, char * argv[])
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);//1 逗号表达式
//	system("pause");
//	return 0;
//}

//笔五
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFC,-4
	system("pause");
	return 0;
}