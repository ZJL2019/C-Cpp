//#define _CRT_SECURE_NO_WARNINGS 1





//大小写转换2++
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!= EOF)//end of file ====>ctr +z
//	{
//		if (ch >= 'a'&&ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= 'A'&&ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch > '0'&&ch <= '9')
//		{
//
//		}
//	}
//	return 0;
//}



//大小写字符转化
//#include<stdio.h>
//int main()
//{
//	char x, y;
//And:printf(" 请输入一个字母：");
//	scanf("%c", &x);
//	if (x >= 'a' && x <= 'z')
//	{
//		y = x - 32;
//		printf("转化后的字符：%c", y);
//	}
//	if (x >= 'A' && x <= 'Z')
//	{
//		y = x + 32;
//		printf("转化后的字符：%c", y);
//	}
//	else
//	{
//		printf("  \n");
//	}
//	system("pause");
//	goto And;
//	return 0;
//}











//用户密码登录
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456")==0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//	system("pause");
//	return 0;
//}









//查找一个数输出下标（二分法）
//int binary_search(int arr[], int key, int left, int right)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key, left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
//	scanf("%d", &key);
//	int ret = binary_search(arr, key, left, right);
//	if (-1 == ret)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}






//猜数游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("*******  1.play  *******\n");
//	printf("*******  0.exit  *******\n");
//	printf("************************\n");
//}
//void game()
//{
//	//生成随机数
//	int num = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入猜的数字：");
//		scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess>num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		//打印菜单
//		menu();
//		printf("请选择：<");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}