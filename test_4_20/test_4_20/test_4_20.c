#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}


int main(void)
{
	//void x  ����  �������޴�С�޷�����
	//void*x;//������ָ�룬�д�С4�ֽ�
	//int a = 10;
	//void*x = &a;  //�޷�������
	//int a = 20;
	//int b = -10;
	//unsigned int a = 1;//��ֵ32��bitλ��������ַ��͵����ݡ�������0
	//*(unsigned char*)&a;//ǿת
	//int ret = check_sys();
	//printf("%d\n", ret);

	//char a = -1;//�з���  1111 1111
	//signed char b = -1;//�з���   1000 0001   1111 1110  1111 1111
	//unsigned char c = -1; //1111 1111 255   
	//printf("a=%d,b=%d,c=%d", a, b, c);//�з������ʹ�ӡ,char ��signed char �з���  �����ʹ�ӡ�������������������Լ��������з��Ų�����λ���з��Ų�һ���޷��Ų���
	//char a = 128;//1 1000 0000    1 0111 1111      1 1000 0000
	//printf("%u\n", a);
	/*int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);*/
	//unsigned int i;//0~2^31-1  ������С��0
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u\n", i);
	//	Sleep(1000);
	//}
	char a[1000];
	int i;
	for (i = 0; i<1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	system("pause");
	return 0;
}