//#define _CRT_SECURE_NO_WARNINGS 1





//��Сдת��2++
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



//��Сд�ַ�ת��
//#include<stdio.h>
//int main()
//{
//	char x, y;
//And:printf(" ������һ����ĸ��");
//	scanf("%c", &x);
//	if (x >= 'a' && x <= 'z')
//	{
//		y = x - 32;
//		printf("ת������ַ���%c", y);
//	}
//	if (x >= 'A' && x <= 'Z')
//	{
//		y = x + 32;
//		printf("ת������ַ���%c", y);
//	}
//	else
//	{
//		printf("  \n");
//	}
//	system("pause");
//	goto And;
//	return 0;
//}











//�û������¼
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456")==0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("�����������������˳�����\n");
//	}
//	system("pause");
//	return 0;
//}









//����һ��������±꣨���ַ���
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
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}






//������Ϸ
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
//	//���������
//	int num = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("������µ����֣�");
//		scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("��С��\n");
//		}
//		else if (guess>num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		//��ӡ�˵�
//		menu();
//		printf("��ѡ��<");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}