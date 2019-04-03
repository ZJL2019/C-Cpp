#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>



//数组在什么时候确定大小  编译
//什么时候开辟内存   运行
//在哪里开辟   栈   ==》最多开辟多少内存？   1M或者2M；


//int PrimeNumber(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//		{
//			break;
//		}
//	}
//	if (sqrt(i) < j)
//	{
//		return 1;
//	}
//	else return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 300; i++)
//	{
//		int ret = PrimeNumber(i);
//		if (1 == ret)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	system("pause");
//	return 0;
//}




////Judge Prime Number
//int PrimeNumber(int x)
//{
//	int j;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x%j == 0)
//		{
//			break;
//		}
//	}
//	if (sqrt(x) < j)
//	{
//		return 1;
//	}
//	else return 0;
//}
//int main()
//{
//	int num;
//	printf("please input a number:");
//	scanf("%d", &num);
//	int ret = primenumber(num);
//	if (0 == ret)
//	{
//		printf("This number is not primenumber!");
//	}
//	else printf("This number is primenumber!");
//	system("pause");
//	return 0;
//}



//Defind Array
void Init(int arr[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void Empty(int arr[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
void Reverse(int arr[], int len)
{
	int tmp;
	for (int i = 0; i < len / 2; i++)
	{

		tmp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = tmp;
	}
}

void Show(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
		//printf("%d ",*(arr+i));//arr[i]==*(arr+i)是两种输出数组的方式
	}
	printf("\n");
}
int main()
{
	int i;
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Init(arr, len);
	Show(arr, len);
	Reverse(arr, len);
	Show(arr, len);
	Empty(arr, len);
	Show(arr, len);
	system("pause");
	return 0;
}



////Judge Leap Year
//int LeapYear(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//	{
//		return 1;
//	}
//	else 
//		return 0;
//}
//int main()
//{
//	int year=0;
//	printf("please input a year:");
//	scanf("%d", &year);
//	int ret = LeapYear(year);
//	if (0 == ret)
//	{
//		printf("This year is not leapyear!\n");
//	}
//	else printf("This year is Leapyear!\n");
//	system("pause");
//}




////Swap  Number
//void Swap(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int x, y;
//	printf("please input two number:");
//	scanf("%d %d", &x, &y);
//	Swap(&x, &y);
//	printf("Sweap two number are:%d %d\n", x, y);
//	system("pause");
//	return 0;
//}




////ShowMulti
//void ShowMulti(int n)
//{
//	int i, j;
//	for (i = 1; i < n + 1; i++)
//	{
//		for (j = 1; j < i + 1; j++)
//		{
//			printf("%2d *%2d =%-2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	printf("please input a number:");
//	scanf("%d", &n);
//	ShowMulti(n);
//	system("pause");
//	return 0;
//}