//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h> 
//#include<errno.h>
//
//int main()
//{
//
//	char *p = malloc(sizeof(char)* 100);
//	if (!p)
//	{
//		printf("%d :%s\n", errno, strerror(errno));
//	}
//	memset(p, 'A', sizeof(char)* 100);
//	char *q = realloc(p, sizeof(char)* 50);
//	if (!q)
//	{
//		printf("%d :%s\n",errno,strerror(errno));
//	}
//	printf("%p, %p", p, q);
//	int i = 0;
//	for (i = 0; i < 50; i++)
//	{
//		printf("%c ", q[i]);
//	}
//	printf("\n");
//	
//	free(q);
//	//printf("Please Enter  n:");
//	//int n = 0;
//	//scanf("%d", &n);
//	////int *p = (int*)malloc(sizeof(int)*n);
//	//int *p = (int*)calloc(n, sizeof(int));
//	//if (!p)
//	//{
//	//	printf("%d : %s\n", errno, strerror(errno));
//	//	return 1;
//	//}
//	//int i = 0;
//	//for (; i < n; i++)
//	//{
//	//	p[i] = i;
//	//}
//	//printf("%p\n", p);
//	//free(p);
//	//printf("%p\n", p);//free ����ָ�벻�����仯���仯����p�뿪�ٵ��ڴ�֮��Ĺ�ϵ
//	system("pause");
//	return 0;
//}




////ö��
//enum color
//{
//	RED,//���� ֵ��0��ʼ ���μ�һ
//	BLACK,
//	BLUE,
//	GREEN,
//	YELLOW
//};
//
////λ��
//struct A{
//	int _a : 2;//ʹ���������ٵ�32��bitλ�е�2��λ
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
////������
//union un{
//	char a;
//	char c;
//};
//
//
//int main()
//{
//
//	/*char *p = malloc(sizeof(char)* 100);
//	if (!p)
//	{
//		printf("malloc error!\n");
//		return 1;
//	}
//	memset(p, 'A', sizeof(char)* 100);
//	char *q = realloc(p, sizeof(char)* 50);
//	if (!q)
//	{
//		printf("realloc error!\n");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 50; i++)
//	{
//		printf("%c ", q[i]);
//	}
//	free(q);
//	q = NULL;*/
//
//
//
//	union un obj;
//	obj.c = 0;
//	obj.c = 1;
//	printf("%d\n", obj.a);//�������СΪ������������Ա�Ĵ�С
//
//	//ö��
//	enum color c=RED;
//	//λ�ε��ڴ����
//	struct S s = { 0 };
//	printf("%d", sizeof(s));
//	memset(&s, 0, sizeof(s));
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//
//	system("pause");
//	return 0;
//}