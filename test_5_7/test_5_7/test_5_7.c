<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
=======
<<<<<<< HEAD
	#define _CRT_SECURE_NO_WARNINGS 1
=======
#define _CRT_SECURE_NO_WARNINGS 1
>>>>>>> 4c771218327e59a5db781e80a2c4bf0deed832f9
>>>>>>> 0cb685d02293674ac8a10381e48a7a11ae57d720
#include<stdio.h>
#include<Windows.h>
#include<assert.h>

//1.模拟实现strcpy

//char My_strcpy(char *a,char *b)//实现strcpy
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	char *p = a;
//	while ((*a++ = *b++) != '\0');
//	return p;
//}
//
//
//int main()
//{
//	char a[] = { "hello word!" };
//	char b[] = { "hello bit!" };
//	char ret=My_strcpy(a, b);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}



//2.模拟实现strcat 


//char My_strcat(char *a, char*b)
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	char*p = a;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	while (*b != '\0')
//	{
//		*p++ = *b++;
//	}
//	*p = '\0';
//	return p;
//}
//int main()
//{
//	char a[20] = { "hello" };
//	char b[20] = { "world!" };
//	char ret = My_strcat(a, b);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}


//3.模拟实现strstr

//char *My_strstr(char *a, char *b)
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	for (int i = 0; a[i] != '\0'; i++)
//	{
//		int tem = i;
//		int j = 0;
//		while (a[i++] == b[j++])
//		{
//			if (b[j] == '\0')
//			{
//				return &a[tem];
//			}
//		}
//		i = tem;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char a[] = { "hello world!" };
//	char b[] = { "world!" };
//	printf("%s\n", My_strstr(a, b));
//	system("pause");
//	return 0;
//}


//4.实现strchr
//char* My_strchr(char *a, char c)
//{
//	assert(a != NULL);
//	while ((*a != '\0')&&(*a != c))
//	{
//		++a;
//	}
//	return *a == c ? a : NULL;
//}
//
//int main()
//{
//	char a[] = { "hello world!" };
//	char c = 'e';
//	printf("%s\n",My_strchr(a,c));
//	system("pause");
//	return 0;
//}


//5.实现strcmp
//int My_strcmp(char *a, char *b)
//{
//	assert((a != NULL)&&(b!=NULL));
//	while(*a == *b)
//	{
//		if (*a == '\0')
//		{
//			return 0;
//		}
//		else
//		{
//			a++;
//			b++;
//		}
//	}
//	return *a - *b;
//}
//int main()
//{
//	char a[] = { "abcdef" };
//	char b[] = { "abcdeg" };
//	printf("%d\n", My_strcmp(a, b));
//	system("pause");
//	return 0;
//}



//6.实现memcpy
//void *My_memcpy(void *destaddr, void *scraddr, size_t n)
//{
//	char *dest = destaddr;
//	char *scr = scraddr;
//	while (n--)
//	{
//		*dest++ = *scr++;
//	}
//	return destaddr;
//}
//int main()
//{
//	char s[] = { "hello world!" };
//	char d[20];
//	memcpy(d, s, (strlen(s) + 1));
//	printf("%s\n", d);
//	system("pause");
//	return 0;
//}


//7.实现memmove
