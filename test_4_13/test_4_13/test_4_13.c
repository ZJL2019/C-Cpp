#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>



int my_strlen(char *s)
{
	char *p = s;
	while (*p != '\0')
		p++;
	return p - s;
}


typedef struct stu{
	char name[64];
	int age;
	char sex;
	int number;
}stu_t;//声明结构体

void Show(stu_t *sp)
{
	printf("%s,%d\n", (*sp).name, (*sp).age);
	printf("%s,%d\n", sp->name, sp->age);
}

int main()
{
	stu_t  s = { "tom", 19 };//定义
	Show(&s);
	//char a[10];
	//printf("%d\n", a);//数组首元素地址
	//printf("%d\n", &a);//整个数组地址   a与&a类型不同
	//printf("%d\n", a + 1);
	//printf("%d\n", &a + 1);//&a代表的是一个数组的大小


	//printf("%d\n", sizeof(a));//10
	//printf("%d\n", sizeof(a + 1));//4
	//printf("%d\n", sizeof(a+0));//4
	//printf("%d\n", sizeof(&a +0 ));//4


	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//int *p = arr;
	//int i = 0;
	//for (; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//	//printf("%d\n", *(p + i));
	//	//printf("%d\n", p[i]);
	//	//printf("&arr[%d]->%p====>p+%d->%p\n", i, &arr, i, p + i);
	//}


    /* int arr[10]={  1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	 printf("%d\n", arr);	
	 printf("%d\n", &arr[0]);*/


	//double a[10];
	//int *p = &a[0];
	//int *q =&a[10];
	///*char *p = (char *)&a[0];
	//char *q = (char*)&a[10];*/
	//printf("%d\n", q - p);//两个指针相减的结果是两个指针之间经历的元素个数，元素个数由指针类型决定

	//char s[] = "abcd";
	//int ret = my_strlen(s);
	//printf("%d\n", ret);


	//int a[10];
	//int *p = &a[0];
	//int *q = &a[9];
	//printf("%d\n", q - p);//9



	//int n = 0x11223344;
	//int *pi = &n;
	//char *pc = (char *)&n;
	//*pc = 0x55;
	//*pi = 0;
	system("pause");
	return 0;
}


//void reverse_string(char *p)
//{
//	int len = strlen(p);
//	char tmp = *p;
//	*p = *(p + len - 1);
//	*(p + len - 1) = '\0';
//	if (strlen(p + 1) > 1)
//	{
//		reverse_string(p + 1);
//	}
//	*(p + len - 1) = tmp;
//}
//int main()
//{
//	char str[] = "abcdef";
//	printf("%s\n", str);
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}

//void reverse_string(char *str)
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
//int main()
//{
//	char str[] = "abcdef";
//	printf("%s\n", str);
//
//	reverse_string(str);
//
//	printf("%s\n", str);
//	/*char *str = "abcdef";//readOnly
//	*(str+1) = 'g';*/
//system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pi = &a;
//	char *pc = (char*)&a;
//	printf("a=%p\n", &a);
//	printf("a=%p\n", pi);
//	printf("a=%p\n", pc);
//	printf("a=%p\n", pi+1);//加4
//	printf("a=%p\n", pc+1);//加1
//	system("pause");
//	return 0;
//}