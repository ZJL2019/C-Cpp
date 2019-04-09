#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




int com(int num1, int num2)
{
	int n = num1^num2;
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("please enter two numbers:");
	scanf("%d%d",&num1, &num2);
	int ret = com(num1, num2);
	printf("%d\n", ret);
	system("pause");
	return;
}




//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d\n", num % 10);
//}
//int main()
//{
//	int num = 0;
//	printf("please enter a number:");
//	scanf("%d", &num);
//	print(num);
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	char arr1[16] = { 0 };
//	char arr2[16] = { 0 };
//	printf("please enter a num:");
//	scanf("%d", &num);
//	for (i = 0; i < 32; i += 2)
//	{
//		arr1[j] = ((num>>i)&1);
//			j++;
//	}
//	for (i = 1, j = 0; i < 32; i += 2)
//	{
//		arr2[j] = ((num>>i)&1);
//		j++;
//	}
//	printf("odd:");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	printf("eve:");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}



//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		value = value&(value - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int value = 0;
//	printf("please enter a number:");
//	scanf("%d", &value);
//	int ret = count_one_bits(value);
//	printf("%d\n", ret);
//	system("pasue");
//	return 0;
//}