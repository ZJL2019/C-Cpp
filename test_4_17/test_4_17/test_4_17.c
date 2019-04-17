#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>
//forth
void reverse_swap(char *left, char *right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char *reverse(char*p)
{
	int len = strlen(p);
	char*start = p;
	char*end = NULL;
	char*ret = p;
	reverse_swap(p, p + len - 1);
	while (*p)
	{
		start = p;
		while ((*p != ' ') && (*p != '\0'))
		{
			p++;
		}
		end = p - 1;
		reverse_swap(start, end);
		if (*p == ' ')
		{
			p++;
		}
	}
	return ret;
}
int main()
{
	char arr[] = "student a am i";
	printf("swap early:%s\n", arr);
	printf("swap late:%s\n", reverse(arr));
	system("pause");
	return 0;
}




//third
//int FindArrOnce(int arr[], int len)//给定数组，并且只能判断一串数组中重复出现两次（两两异或）
//{
//	int i, tmp = 0;
//	for (i = 0; i < len; i++)
//	{
//		tmp = tmp^arr[i];
//	}
//	return tmp;
//}
//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 3, 5 };
//	int len = sizeof(arr)/sizeof(arr[0]);
//	int ret = FindArrOnce(arr, len);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

////second
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("please enter two number:");
//	scanf("%d%d", &a, &b);
//    int avg= (a + b) >> 1;
//	printf("%d\n", avg);
//	system("pause"); 
//	return 0;
//}


////first
//unsigned int reverse_bit(unsigned int value)
//{
//	int arr[32] = { 0 };
//	unsigned int sum = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		arr[i] = value & 1;
//		value = value >> 1;
//	}
//	for (int i = 0; i < 32; i++)
//	{
//		sum = sum + arr[i] * pow(2, 32 - 1 - i);
//	}
//	return sum;
//}
//int main()
//{
//	int num = 0;
//	printf("please enter a number:");
//	scanf("%d", &num);
//	unsigned int ret = reverse_bit(num);
//	printf("翻转二进制后的值为：");
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//}
