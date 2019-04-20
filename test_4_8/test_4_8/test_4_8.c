#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<Windows.h>


//编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//void reverse_num(char *str)
//{
//	char *left = str;
//	char *right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
int main()
{
	char str[] = "abcdef";
	printf("%s\n", str);
	reverse_num(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}

//递归方式实现打印一个整数的每一位
////printf number
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\t", n % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("please enter a numer:");
//	scanf("%d", &n);
//	print(n);
//	printf("\n");
//	system("pause");
//	return 0;
//}


//递归和非递归分别实现求n的阶乘
////fac(ite)
//int FacIte(int n)
//{
//	int sum = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//
////fac(rec)
//int FacRec(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*FacRec(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("please enter a number:");
//	scanf("%d", &n);
//	int retr = FacIte(n);
//	int reti = FacRec(n);
//	printf("%d\n", retr);
//	printf("%d\n", reti);
//	system("pause");
//	return 0;
//}




//递归和非递归分别实现strlen 
////str(ite)
//int StrI(char string[])
//{
//	int cnt = 0;
//	//断言不是函数，是宏,断言只在Debug环境下开发，Release面向用户
//	assert(string != NULL);
//	while ('\0' != *string)
//	{
//		cnt++;
//		string++;
//	}	
//	return cnt;
//}
//
////strlen (rec)
//int StrR(char string[])
//{
//	if ('\0' == *string)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + StrR(string + 1);
//	}
//}
//int main()
//{
//	char s[] = "abcd";
//	int retr = StrR(s);
//	int reti = StrI(s);
//	printf("%d\n", retr);
//	printf("%d\n", reti);
//	system("pause");
//	return 0;
//}



//逆置
//char reverse_string(char string[])
//{
//	if ('\0' == *string)//判断string数组中的字符是否为'\0'
//	{
//		printf("%c", *string);
//	}
//	else
//	{
//		reverse_string(++string);//依次遍历数组，从首地址先加后调
//		printf("%c", *(--string));//指针指向数组最后一个，输出需先减后调
//	}
//}
//int main()
//{
//	char s []= "hello! bit";
//	reverse_string(s);
//	printf("\n");
//	system("pause");
//	return 0;
//}



//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//sum 
//int DigitSum(unsigned int x)
//{
//	int sum = 0;
//	int m = 0;
//	if (x != 0)
//	{
//		m = x % 10;
//		x = x / 10;
//		sum = m + DigitSum(x);
//	}
//	return sum;
//}
//int main()
//{
//	int x = 0;
//	printf("please enter a num:");
//	scanf("%d", &x);
//	int ret = DigitSum(x);
//	printf("sum=%d\n", ret);
//	system("pause");
//	return 0;
//}




//编写一个函数实现n^k，使用递归实现
//n^k(rec)
//int Fun(int a, int b)
//{
//	if (0==b)
//	{
//		return 1;
//	}
//	else if (1 == b)
//	{
//		return a;
//	}
//	else
//		return a*Fun(a, b - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("please enter n and k:");
//	scanf("%d%d", &n, &k);
//	int ret = Fun(n, k);
//	printf("n^k=%d\n", ret);
//	system("pause");
//	return 0;
//}



//递归和非递归分别实现求第n个斐波那契数。
//int FibRec(unsigned int n)//Fibonacci   (rec)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return FibRec(n - 1) + FibRec(n - 2);	
//}
//
//
//int FibIte(unsigned int n)//Fibonacci(ite)
//{
//	int first = 1;
//	int second = 1;
//	int third = 1;
//	unsigned int i = 2;
//	while (i < n)
//	{
//		third = first + second;
//		first = second;
//		second = third;
//		i++;
//	}
//	return third;
//}
//int main()
//{
//	int retR = FibRec(40);
//	printf("%d\n", retR);
//	int retI = FibIte(40);
//	printf("%d\n", retI);
//	system("pause");
//	return 0;
//}