	#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<assert.h>
char My_strcpy(char *a,char *b)// µœ÷strcpy
{
	assert(a != NULL);
	assert(b != NULL);
	char *p = a;
	while ((*a++ = *b++) != '\0');
	return p;
}




int main()
{
	char a[] = { "hello word!" };
	char b[] = { "hello bit!" };
	char ret=My_strcpy(a, b);
	printf("%s\n", a);
	system("pause");
	return 0;
}