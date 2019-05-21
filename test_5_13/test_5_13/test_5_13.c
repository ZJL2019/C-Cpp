#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<Windows.h>

//9.memmove 内存移动函数
void*Mymemmove(void*dest, const void*src, int count)
{
	void *ret = dest;
	const void *p = src;
	if (src > dest)
	{
		while (count != 0)
		{
			*((char*)dest) = *((char*)src);
			((char*)dest)++;
			((char*)src)++;
			count--;
		}
		return ret;
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
			//count--;
		}
		return p;
	}
}


//8.memcpy  内存拷贝函数
void*Mymemcpy(void *dest, const void *src, int count)//conut:字节数
{
	void*ret = dest;
	while (count != 0)
	{
		*((char*)dest) = *((char*)src);
		((char*)dest)++;
		((char*)src)++;
		count--;
	}
	return ret;
}




//7.strcmp

int Mystrcmp(const char*str1, const char*str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}


int Mystrncmp(const char *str1, const char *str2, int n)
{
		while (*str1 == *str2)
		{
			str1++;
			str2++;
			n--;
			if (n == 0)
			{
				return 0;
			}
		}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

//6.strchr
const char*Mystrchr(const char *src, char ch)
{
	while (*src != '\0')
	{
		if (*src == ch)
		{
			return src;
		}
		src++;
	}
	return NULL;
}



//5.strstr
//朴素算法   KMP
const char *Mystrstr(const char *str1, const char *str2)
{
	const char *s1 = NULL;
	const char *s2 = NULL;
	const char *start = str1;
	while (*start != '\0')
	{
		s1 = start;//s1回退到上一次的下一个位置
		s2 = str2;//s2回退到str2的起始位置
		while (*s1 != '\0' && *s2 != '\0'&&*s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return start;
		}
		if (*s1 == '\0')
		{
			return NULL;
		}
		start++;
	}
	return NULL;
}


//4.strcat
char* Mystrcat(char*dest, const char* src)
{
	char *p = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	//dest指向\0
	while (*dest++ = *src++);
	return p;
}

char* Mystrncat(char*dest, const char* src, int n)
{
	char *p = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	//dest指向\0
	while (n)
	{
		if ((*dest = *src) != '\0')
		{
			dest++;
			src++;
			n--;
		}
	}
	return p;
}


//3.strcpy
char *Mystrcpy(char *dest, const char *src)
{
	/*char*p = dest;
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return p;*/
	char*p = dest;
	while (*dest++ = *src++);//空循环，条件先赋值，后判断
	return p;
}



char *Mystrncpy(char *dest, const char *src, int n)
{
	char *tmp = dest;
	while (n)
	{
		if ((*dest++ = *src++) != '\0')
		{
			n--;
		}
	}
	if (n)
	{
		while (--n)
		{
			*dest++ = '\0';
		}
	}
	return tmp;
	/*char *start = dest;

	while (n && (*dest++ = *src++))
	{
	n--;
	}
	if (n)
	{
	while (--n)
	{
	*dest++ = '\0';
	}
	}
	return(start);*/
}


int main()
{
	char *dest = "abc";//主串
	char *src = "aac";//子串
	//Mystrncpy(dest, src,1);
	//Mystrncat(dest, src, 2);
	int ret=Mystrncmp(dest, src,2);
	printf("%d\n", ret);
	//Mystrcat(dest, src);
	/*Mystrstr(dest, src);*/
	//printf("%s\n", Mystrchr(src, 'b'));
	////printf("%d\n", Mystrcmp("abcd","abcd"));
	//int arr[10] = { 1, 2, 3, 4, 6, 7, 8, 9, 0 };
	//int arr2[10] = { 0 };
	//int*p=(int *)Mymemcpy(arr2, arr, 16);
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", p[i]);
	//}
	//内存拷贝函数
	/*int *p = (int *)memcpy(arr2, arr, 16);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
	printf("%d ", p[i]);
	}*/

	//内存移动函数
	/*int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr2[] = { 0 };
	int *p = (int *)Mymemmove(arr+2, arr , 16);
	for (int i = 0; i < 7; i++)
	{
	printf("%d ", p[i]);
	}*/
	system("pause");
	return 0;
}







//2.汽水
//2*money-1
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	system("pause");
//	return 0;
//}







//1.
//int main()
//{
//	int arr[] = { 2, 4, 3, 6, 3, 2, 5, 5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int num = 0;
//	int x = 0;
//	int y = 0;
//	//异或数组中所有的数
//	for (i = 0; i < len; i++)
//	{
//		//num=num^arr[i]
//		num ^= arr[i];
//	}
//	//2.num肯定是异或的结果
//	//-----》找到num二进制第一位为1的位数
//	int pos = 0;//pos用来记录存放二进制第一位为1的位数
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//遍历数组分为两个子数组
//	
//	for (i = 0; i < len; i++)
//	{
//		if (((arr[i] >> pos) & 1)==1)
//		{
//			x ^= arr[i];
//		}
//		else
//		{
//			y ^= arr[i];
//		}
//	}
//	printf("%d,%d\n", x, y);
//	system("pause");
//	return 0;
//}