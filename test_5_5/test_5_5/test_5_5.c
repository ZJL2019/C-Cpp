#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define P 1//cola 单价
#define N 2//2个空瓶换1瓶cola
#include<assert.h>


//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现


//void Find_num(int *arr, int len)
//{
//	int i = 0;
//	int ret = 0;
//	int pos = 0;
//	int x = 0;
//	int y = 0;
//	for (i = 0; i < len; i++)
//	{
//		ret ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((ret >> i) & 1))
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (1 == ((arr[i] >> pos) & 1))
//		{
//			x ^= arr[i];
//		}
//		else
//		{
//			y ^= arr[i];
//		}
//	}
//	printf("x=%d,y=%d\n", x, y);
//}
//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find_num(arr, sz);
//	system("pause");
//	return 0;
//}






//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

//int Drinkcola(int x)
//{
//	int ret = x / N;
//	int empty = x / N + x%N;
//	if (empty > 1)
//	{
//		return ret + Drinkcole(empty);
//	}
//	else
//	{
//		return ret;
//	}
//}
//int main()
//{
//	int p = 0;
//	printf("please enter a number of money:>\n");
//	scanf("%d", &p);
//	int n = p / P;
//	int number = n+Drinkcole(n);
//	printf("There are %d bottle cola!\n",number);
//	system("pause");
//	return 0;
//}



//3.模拟实现strcpy

//char My_strcpy(char *a,char *b)
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	char*p = a;
//	while ((*a++ = *b++) != '\0');
//	return p;
//}
//int main()
//{
//	char a[] = { "hello word!" };
//	char b[] = { "hello bit!" };
//	char ret = My_strcpy(a, b);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}




//4.模拟实现strcat

//char My_strcat(char*a, char*b)
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	char*p = a;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	while (*b != '\0')
//	{
//		*p++ = *b++;
//	}
//	*p = '\0';
//	return p;
//}
//int main()
//{
//	char a[20] = { "hello" };
//	char b[20] = { "world!" };
//	char ret = My_strcat(a, b);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}