#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>

struct stu{
	char name[32];
	int age;
	char sex;
	double score;
};
int main()
{
	////strstr
	//const char *str = "abc1234defgh1234abcd";
	//const char *sub_str = "1234";
	//printf("%s\n", strstr(str, sub_str));//��Զ���ҵ�һ�γ���


	//strtok
	//char str[]="- hello word,hello*bit";//�ָ���ȫ������Ϊ\0,���ҷ����׵�ַ��ֵ���ַ����������ɸ���
	//char*p = strtok(str, "- ,*");
	//while (p!=NULL)
	//{
	//	printf("%s\n", p);
	//	p = strtok(NULL,"- ,*");
	//}


	//memcpy
	/*struct stu zhangsan = { "zhangsan", 21, 'm', 71.5 };
	struct stu lisi;
	memcpy(&lisi, &zhangsan, sizeof(zhangsan));*/

	//memmove
	/*char buf[64];
	char str[64] = "memmove can be very useful......";
	memmove(str, str + 1,4 );
	puts(str);*/

	//memset
	int a[10];
	memset(a, 1, sizeof(a));//16843009
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}