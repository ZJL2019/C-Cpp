#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count_bit1(int x)
{
	int count = 0;
	while (x)
	{
		if (x % 2 == 1)
		{
			count++;
		}
		x = x / 2;
	}
	return count;
}
int count_bit2(int x)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((x >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int count_bit3(int x)
{
	int count = 0;
	while (x)
	{
		x = x&(x - 1);
		count++;
	}
	return count;
}
void fun(int a[])//�β�Ϊָ�룬����Ϊ���ͣ�����ָ��
{
	printf("%d\n", sizeof(a));//��СΪ4
}

struct str
{
	char name[60];
	int age;
	char sex[5];
	double score;
};


int main()
{
	unsigned char a = -1;//1111  1111  ���λΪ����λ
	printf("%u\n", a);
	/*struct str tom = { "tom", 'm', 20, 80 };
	struct str *p=&tom;


	printf("%s\n", tom.name);
	printf("%s\n", (*p).name);



	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	////i = a++&&b++&&d++;//�߼��룬��һ������Ϊ�ٲ����ж�
	//i=a++||++b||d++;//�߼��򣬵�һ������Ϊ�ټ����ж�
	//printf("  a=%d\n  b=%d\n  c=%d\n  d=%d\n", a, b, c, d);
	

	//float f = 3.14;
	//if (f-3.14>x&&f-3.14<y)//float�жϲ���ֱ��==


	/*int a = 0;
	int *p = &a;
	if (NULL == p)*/

	/*int a = 100;
	if (100 == a)*/


	///*int x= ++a;
	//int y = --a;*/
	//int x= a++;
	////int y = a--;
	//printf("%d\n", a);
	//printf("%d,%d\n", x);


	//int a[100];
	//printf("%d\n", sizeof(a));
	//fun(a);//���鴫�η�����ά


	//int x = 1;
	//int *p = &x;
	//printf("%d\n", sizeof(p));//ָ����32λ��Ϊ4���ֽڣ�64λ��Ϊ8���ֽ�


	//printf("%d\n", sizeof(x));//sizeofΪ�ؼ��֣����Ǻ���������ʹ�ô�����
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof x);//��ȷ
	//printf("%d\n", sizeof  int);//����


	//printf("%d\n", x);
	//printf("0x%p\n", x);//ʮ������

	//x = -x;
	//printf("%d\n", x);


	////if (x)//!�߼���λȡ��
	//if (!x)
	//{
	//	printf("AAAAAAAAAAAAAAAAA");
	//}
	//else
	//{
	//	printf("BBBBBBBBBBBBBBBBBB");
	//}


	/*int x=1234;
	printf("x����������%d��1\n", count_bit1(x));*/
	//int x = 1;
	//int y = 2;
	//printf("before:x=%d,y=%d\n", x, y);
	//x = x^y;
	//y = x^y; //x^y^y   y=1	int																				   
	//x = x^y; //x^y^y   y=2
	//printf("%d,%d\n", x, y);																												   
	system("pause");
	return 0;
}