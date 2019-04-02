//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//

//Judge Prime Number
//int primenumber(int x)
//{
//	int j;
//	for ( j = 2; j <= sqrt(x); j++)
//	{
//		if (x%j == 0)
//		{
//			break;
//		}
//	}
//	if (sqrt(x) <j)
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
//void init(int arr[],int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//void empty(int arr[],int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[], int n)
//{
//	int tmp;
//	for (int i = 0; i < n / 2; i++)
//	{
//
//		tmp = arr[i];
//		arr[i] = arr[n - i - 1];
//		arr[n - i - 1] = tmp;
//	}
//}
//
//void Show(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int i;
//	int arr[9] = { 0 };
//	init(arr, 9);
//	Show(arr, 9);
//	reverse(arr, 9);
//	Show(arr, 9);
//	empty(arr, 9);
//	Show(arr, 9);
//	system("pause");
//	return 0;
//}



//Judge Leap Year
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




//Swap  Number
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




//Multiplication Table
//void Multiplicationtable(int n)
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
//	Multiplicationtable(n);
//	system("pause");
//	return 0;
//}