#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
//���Ͼ���
//�������������в���һ������ʱ�临�Ӷ�С��O(n)
#define ROW 3
void YoungMat(int arr[][ROW])
{
	int i = 0;
	int j = 0;
	printf("Please enter a Young's matrix:");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
}
int  SeekNum(int arr[][ROW])
{
	int n = 0;
	int i= 0;
	int j = ROW - 1;
	printf("Please enter a number:");
	scanf("%d", &n);
	while ((j >= 0) && (i < ROW))
	{
		if (arr[i][j] == n)
		{
			return 1;
		}
		else if (arr[i][j] < n)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	return 0;
}
int main()
{
	int arr[ROW][ROW] = { 0 };;
	YoungMat(arr);
	int ret=SeekNum(arr);
	if (1 == ret)
	{
		printf("Find number! ");
	}
	else
	{
		printf("NOT Find!");
	}
	system("pause");
	return 0;
}










//��������ʹ����ȫ����λ��ż��ǰ�档 

//void AdjustArr(int arr[], int sz)
//{
//	int *left = arr;
//	int *right = arr+sz;
//	int tmp = 0;
//	while (left < right)
//	{
//		if (*left% 2 != 0)
//		{
//			left++;
//		}
//		else if (*right % 2 == 0)
//		{
//			right--;
//		}
//		else
//		{
//			tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//	for (int i=0; i<= sz; i++)
//	{
//		printf("%d\t", *(arr+i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	AdjustArr(arr, sz);
//	system("pause");
//	return 0;
//}