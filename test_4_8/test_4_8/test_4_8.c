#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<Windows.h>


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//void reverse_num(char *str)
//{
//	char *left = str;
//	char *right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
int main()
{
	char str[] = "abcdef";
	printf("%s\n", str);
	reverse_num(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
////printf number
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\t", n % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("please enter a numer:");
//	scanf("%d", &n);
//	print(n);
//	printf("\n");
//	system("pause");
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
////fac(ite)
//int FacIte(int n)
//{
//	int sum = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//
////fac(rec)
//int FacRec(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*FacRec(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("please enter a number:");
//	scanf("%d", &n);
//	int retr = FacIte(n);
//	int reti = FacRec(n);
//	printf("%d\n", retr);
//	printf("%d\n", reti);
//	system("pause");
//	return 0;
//}





//�ݹ�ͷǵݹ�ֱ�ʵ��strlen 
////str(ite)
//int StrI(char string[])
//{
//	int cnt = 0;
//	//���Բ��Ǻ������Ǻ�,����ֻ��Debug�����¿�����Release�����û�
//	assert(string != NULL);
//	while ('\0' != *string)
//	{
//		cnt++;
//		string++;
//	}	
//	return cnt;
//}
//
////strlen (rec)
//int StrR(char string[])
//{
//	if ('\0' == *string)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + StrR(string + 1);
//	}
//}
//int main()
//{
//	char s[] = "abcd";
//	int retr = StrR(s);
//	int reti = StrI(s);
//	printf("%d\n", retr);
//	printf("%d\n", reti);
//	system("pause");
//	return 0;
//}



//����
//char reverse_string(char string[])
//{
//	if ('\0' == *string)//�ж�string�����е��ַ��Ƿ�Ϊ'\0'
//	{
//		printf("%c", *string);
//	}
//	else
//	{
//		reverse_string(++string);//���α������飬���׵�ַ�ȼӺ��
//		printf("%c", *(--string));//ָ��ָ���������һ����������ȼ����
//	}
//}
//int main()
//{
//	char s []= "hello! bit";
//	reverse_string(s);
//	printf("\n");
//	system("pause");
//	return 0;
//}



//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//sum 
//int DigitSum(unsigned int x)
//{
//	int sum = 0;
//	int m = 0;
//	if (x != 0)
//	{
//		m = x % 10;
//		x = x / 10;
//		sum = m + DigitSum(x);
//	}
//	return sum;
//}
//int main()
//{
//	int x = 0;
//	printf("please enter a num:");
//	scanf("%d", &x);
//	int ret = DigitSum(x);
//	printf("sum=%d\n", ret);
//	system("pause");
//	return 0;
//}




//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//n^k(rec)
//int Fun(int a, int b)
//{
//	if (0==b)
//	{
//		return 1;
//	}
//	else if (1 == b)
//	{
//		return a;
//	}
//	else
//		return a*Fun(a, b - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("please enter n and k:");
//	scanf("%d%d", &n, &k);
//	int ret = Fun(n, k);
//	printf("n^k=%d\n", ret);
//	system("pause");
//	return 0;
//}



//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//int FibRec(unsigned int n)//Fibonacci   (rec)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return FibRec(n - 1) + FibRec(n - 2);	
//}
//
//
//int FibIte(unsigned int n)//Fibonacci(ite)
//{
//	int first = 1;
//	int second = 1;
//	int third = 1;
//	unsigned int i = 2;
//	while (i < n)
//	{
//		third = first + second;
//		first = second;
//		second = third;
//		i++;
//	}
//	return third;
//}
//int main()
//{
//	int retR = FibRec(40);
//	printf("%d\n", retR);
//	int retI = FibIte(40);
//	printf("%d\n", retI);
//	system("pause");
//	return 0;
//}