#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>


//��һ���ַ����������Ϊ:"student a am i",	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ�
//forth
void reverse_swap(char *left, char *right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reverse(char*p)
{
	assert(p != NULL);
	int len = MyStrlen(p);
	char*start = p;
	char*end =p+len-1;
	//������������
	reverse_swap(start, end);
	while (*p!='\0')
	{
		start = p;
		while ((*p != ' ') && (*p != '\0'))
		{
			p++;
		}
		end = p - 1;
		reverse_swap(start, end);
		if (*p == ' ')
		{
			p++;
		}
	}
}
int MyStrlen(char*p)
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char arr[] = "student a am i";
	printf("swap early:%s\n", arr);
	reverse(arr);
	printf("swap late:%s\n",arr);
	system("pause");
	return 0;
}



////���ʵ�֣� 
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

//third
//int FindArrOnce(int arr[], int len)//�������飬����ֻ���ж�һ���������ظ��������Σ��������
//{
//	int i, tmp = 0;
//	for (i = 0; i < len; i++)
//	{
//		tmp = tmp^arr[i];
//	}
//	return tmp;
//}
//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 3, 5 };
//	int len = sizeof(arr)/sizeof(arr[0]);
//	int ret = FindArrOnce(arr, len);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}



//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

////second
int Averge1(int a, int b)
{
	return a + (b - a) / 2;
}
//a+b=(a&b)*2+(a^b)
//(a+b)/2=(a&b)+(a^b)/2
//(a+b)/2=(a&b)+(a^b)>>1  λ����
//int Averge2(int a, int b)
//{
//	return (a + b) >> 1;
//}
//int Averge3(int a, int b)
//{
//	return (a&b) + (a^b) >> 1;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("please enter two number:");
//	scanf("%d%d", &a, &b);
//	printf("%d\n", Averge1(a,b));
//	printf("%d\n", Averge2(a, b));
//	printf("%d\n", Averge3(a, b));
//	system("pause"); 
//	return 0;
//}



//��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
////first
//unsigned int reverse_bit(unsigned int value)
//{
//	int arr[32] = { 0 };
//	unsigned int sum = 0;
//	
//	for (int i = 0; i < 32; i++)
//	{
//		sum += ((value >> i) & 1) * pow(2, 31 - i);
//	}
//	return sum;
//}
//int main()
//{
//	int num = 0;
//	printf("please enter a number:");
//	scanf("%d", &num);
//	unsigned int ret = reverse_bit(num);
//	printf("��ת�����ƺ��ֵΪ��");
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//}
