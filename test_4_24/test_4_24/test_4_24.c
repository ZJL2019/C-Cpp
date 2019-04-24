#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<string.h> 
#include<assert.h>

int is_left_move1(char*arr, const char*p)
{
	int i = 0;
	if (strlen(arr) != strlen(p))
	{
		return 0;
	}
	for (i = 0; i < strlen(arr); i++)
	{
		left_move1(arr,1);
		if (strcmp(arr, p) == 0)
		{
			return 1;
		}
	}
}


int is_left_move2(char*arr, const char*p)
{
	if (strlen(arr) != strlen(p))
	{
		return 0;
	}
	/*
	char *strncat(char *strDest,
	const char *strSource,
	size_t count );
	将strSource的count个字符，拼接到strDest
	=============
	char *strcat(
	char *strDestination,
	const char *strSource);
	strcat(str,str2);--->把strSource拼接
	到strDestination
	*/
	strncat(arr, arr, strlen(arr));
	//strstr查找字符串
	/*
	char *strstr(const char *str,
	const char *strSearch
	);
	在str里边，查找字符串strSearch。
	*/
	if (strstr(arr, p) == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}


void Reverse(char*left, char*right)
{
	assert(left != NULL&&right != NULL);
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int  left_move1(char *str, int k)
{
	if (k < 0 || k>strlen(str))
	{
		printf("error!\n");
		return 0;
	}
	int len = strlen(str);
	Reverse(str, str + k - 1);
	Reverse(str + k, str + len - 1);
	Reverse(str, str + len - 1);
}
int main()
{
	char str[] = { "abcdef" };
	char str2[] = { "abcdef" };
	if (is_left_move1(str, str2) == 1)
	{
		printf("str2是str旋转后的\n");
	}
	else
	{
		printf("str2不是str旋转后的\n");
	}
	//left_move1(str, 3);
	//printf("%s", str);
	/*char str[] = { "ABCD" };
	int len = strlen(str);
	char*left = str;
	char*right = str + len - 1;
	Reverse(left, right);
	printf("%s", str);*/
	system("pause");
	return 0;
}



//int  left_move2(char *str, int k)
//{
//	if (k < 0 || k>strlen(str))
//	{
//		printf("error!\n");
//		return 0;
//	}
//	while (k > 0)
//	{
//		char*cur = str;
//		char tmp = 0;
//		tmp = *cur;
//		while (*(cur + 1) != '\0')
//		{
//			*cur = *(cur + 1);
//			cur++;
//		}
//		*cur = tmp;
//		k--;
//	}
//	
//}
//int main()
//{
//	char str[] = { "ABCD" };
//	left_move2(str,-1);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}




//void find(int arr[3][3], int *px, int *py, int key)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px&&y >= 0)
//	{
//		if (arr[x][y] == key)
//		{
//			*px = x;
//			*py = y;
//		}
//		else if (arr[x][y] < key)
//		{
//			x++;
//		}
//		else
//		{
//			y--;
//		}
//		*px = -1;
//		*py = -1;
//	}
//}
////打印二维数组
////print_Arrs(int arr[3][3],int row,int col)
////print_Arrs(int (*arr)[3],int row,int col)
//void print_Arrs(int *arr, int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i*col + j]);//i*col+j;
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int x = 3;
//	int y = 3;
//	print_Arrs(arr, 3, 3);
//	find(arr, &x, &y, 6);
//	if (x != -1 && y != -1)
//	{
//		printf("find %d,%d\n", x, y);
//	}
//	else
//	{
//		printf("not find\n");
//	}
//	system("pause");
//	return 0;
//}


//调整数组使奇数全部都位于偶数前面
//void Swap_arr(int *arr, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		//left++------>left奇数
//		while (left < right&&arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right&&arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void show(int *arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	show(arr, len);
//	Swap_arr(arr, len);
//	show(arr, len);
//	system("pause");
//	return 0;
//}