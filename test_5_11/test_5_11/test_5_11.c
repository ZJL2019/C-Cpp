#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
//int main()
//{
	//һά����

	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));//4        ��һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*a));//4           ��Ԫ��
	//printf("%d\n", sizeof(a + 1));//4        �ڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4           ����ĵ�ַ
	//printf("%d\n", sizeof(*&a));//16         ��������
	//printf("%d\n", sizeof(&a + 1));//4       ��һ������ĵ�ַ
	//printf("%d\n", sizeof(&a[0]));//4        ��ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4    ��ַ


	//�ַ�����

	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4   ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));//1      ��Ԫ��
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4   �ڶ���Ԫ�صĵ�ַ


	//printf("%d\n", strlen(arr));// >=6  ex:10
	//printf("%d\n", strlen(arr + 0));//  >=6   10
	////printf("%d\n", strlen(*arr));//   X
	////printf("%d\n", strlen(arr[1]));//  X
	//printf("%d\n", strlen(&arr));//  >=6  10   
	////warning C4047: ��������:��const char *���롰char (*)[6]���ļ�Ӽ���ͬ
	//printf("%d\n", strlen(&arr + 1));//     4    ������������
	////warning C4047: ��������:��const char *���롰char (*)[6]���ļ�Ӽ���ͬ
	//printf("%d\n", strlen(&arr[0] + 1));//   9   ������һ��Ԫ��



	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4
	//
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//X
	////printf("%d\n", strlen(arr[1]));//X
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//unknow
	//printf("%d\n", strlen(&arr[0] + 1));//5


	//char *p = "abcdef";//�ַ�������   *p��ջ�Ͽ���
	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p + 1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p + 1));//4
	//printf("%d\n", sizeof(&p[0] + 1));//4
	//
	//
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//X
	////printf("%d\n", strlen(p[0]));//X
	//printf("%d\n", strlen(&p));//��p�ĵ�ַ�������ַ���  unknown
	//printf("%d\n", strlen(&p + 1));//��p+1�ĵ�ַ�������ַ���  unknown
	//printf("%d\n", strlen(&p[0] + 1));//5




	//��ά����
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16
	//printf("%d\n", sizeof(a[0] + 1));//4   ��һ��������ĵڶ�������Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*(a[0] + 1)));//4   ��һ��������ĵڶ�������Ԫ��
	//printf("%d\n", sizeof(a + 1));//4     �ڶ���һά����ĵ�ַ
	//printf("%d\n", sizeof(*(a + 1)));//16   �ڶ���һά����
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16  �ڶ���һά����
	//printf("%d\n", sizeof(*a));//16    ��һ��һά����
	//printf("%d\n", sizeof(a[3]));//16   Խ��ɶ�ȡ������д��

	//��һ
	//int a[5] = { 1, 2, 3, 4, 5 };
	//int *ptr = (int *)(&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1));//2��5
	
//	system("pause");
//	return 0;
//}

////�ʶ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;//20
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014   ���Ͻṹ��ָ��Ĵ�С
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001    ��һ
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004    ǿתint  ����
//
//	system("pause");
//	return 0;
//}



//����
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4,02000000  
//	system("pause");
//	return 0;
//}


//����
//int main(int argc, char * argv[])
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);//1 ���ű��ʽ
//	system("pause");
//	return 0;
//}

//����
<<<<<<< HEAD
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFC,-4
//	system("pause");
//	return 0;
//}

//����
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);//����Ԫ�صĵ�ַ
//	int *ptr2 = (int *)(*(aa + 1));//�ڶ���Ԫ�صĵ�ַ------>�ڶ���Ԫ��----->�ڶ���Ԫ�ص���Ԫ��
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//	system("pause");
//	return 0;
//}

//����
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };//	�ַ�������
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a[] = "abcdefg";
//	int num = sizeof(a) / sizeof(a[0]);
//	char *p = a;
//	for (int i = 0; i < num - 1; i++)
//	{
//		printf("%c ", (*(p + i));
//		printf("%c ", p[i]);
//	}
//	system("pause");
//	return 0;
//}


//�ʰ�
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
=======
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFC,-4
>>>>>>> c4e0b6bc181313f06b6870b897d82582023106e9
	system("pause");
	return 0;
}