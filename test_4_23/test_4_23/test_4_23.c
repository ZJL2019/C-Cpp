#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<string.h>
//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.

void Rotarr1(char*arr, int k, int len)
{
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int j = 0;
		char tmp = arr[0];
		for (j = 0; j < len; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}
int JudgeRot(char *arr, char*arr1, int len)
{
	int i = 0;
	int j = 0;
	for (i = 0, j = 0; i < len;)
	{
		if (arr[i] == arr1[j])
		{
			i++;
			j++;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char arr[] = { "ABCDEF" };
	char arr1[] = { "CDEFAB" };
	int k = 0;
	int len = strlen(arr);
	printf("rotate ealy:%s\n", arr);
	printf("rotate number:");
	scanf("%d", &k);
	while (k<1 || k>len - 1)
	{
		if (k == len)
		{
			printf("%s\n", arr);
			system("pause");
			return 0;
		}
		else
		{
			printf("cin errow!cin again!:");
			scanf("%d", &k);
		}
	}
	Rotarr1(arr, k, len);
	printf("rotat late:%s\n", arr);
	int ret = JudgeRot(arr, arr1,len);
	if (1 == ret)
	{
		printf("arr and arr1 are same!");
	}
	else
	{
		printf("no same!");
	}
	system("pause");
	return 0;
}









//实现一个函数，可以左旋字符串中的k个字符。 
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//void Rotarr(char*arr,int k,int len)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		char tmp = arr[0];
//		for (j = 0; j < len; j++)
//		{
//			arr[j] =arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = { "ABCDEF" };
//	int k = 0;
//	int len = strlen(arr);
//	printf("rotate ealy:%s\n",arr);
//	printf("rotate number:");
//	scanf("%d", &k);
//	while (k<1 || k>len - 1)
//	{
//		if (k== len)
//		{
//			printf("%s\n", arr);
//			system("pause");
//			return 0;
//		}
//		else
//		{
//			printf("cin errow!cin again!:");
//			scanf("%d", &k);
//		}
//	}
//	Rotarr(arr, k, len);
//	printf("rotat late:%s\n", arr);
//	system("pause");
//	return 0;
//}