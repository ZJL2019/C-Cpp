<<<<<<< HEAD
	#define _CRT_SECURE_NO_WARNINGS 1
=======
#define _CRT_SECURE_NO_WARNINGS 1
>>>>>>> 4c771218327e59a5db781e80a2c4bf0deed832f9
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