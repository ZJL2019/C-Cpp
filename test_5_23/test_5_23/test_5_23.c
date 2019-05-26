#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//#pragma pack(1)//赋予编译器的默认对齐数
void* my_memmove(void *dest, void *src, int num)
{
	assert(dest);
	assert(src);

	char *_dest = (char *)dest;
	char *_src = (char*)src;
	if ((_dest > _src)&&(_dest < _src + num))
	{
		_dest += num - 1;
		_src += num - 1;
		while (num--)
		{
			*_dest = *_src;
			_dest--, _src--;
		}
	}
	else
	{
		while (num--)
		{
			*_dest = *_src;
			_dest++, _src++;
		}
	}
	return dest;
}




void* my_memcpy(void*dest, const void*src, int num)
{
	assert(dest);
	assert(src);
	char *_src = (char*)src;
	char *_dest = (char*)dest;
	int i = 0;
	while (i < num)
	{
		_dest[i++] = _src[i++];
	}
	return _dest;
}

typedef struct stu{//c语言中结构体成员变量不能为空
	char name[32];
	int age;
	char sex;
	int score;
}stu_t,*stu_p,**stu_pp;




struct A{
	double z;
	char x;
	int y;
};

struct B{
	char c1;
	struct A s3;
	double d;
};

struct C{
	char a;
	char b;
	double c;
};
struct D{
	double a;
	char b[3];
	char *c;
	struct C d[3];
	double e;
	long long *f[3];
	char g;
};
int  main()
{
	printf("%d\n", sizeof(struct A));//16
	printf("%d\n", sizeof(struct B));//32
	printf("%d\n", sizeof(struct D));//88

	//char src[32] = "hello bit!";
	//char src1[32] = "hello bit!";
	//my_memmove(src + 1, src, strlen(src) + 1);
	//printf("%s\n", src);
	//my_memcpy(src1 + 1, src, strlen(src) + 1);
	////printf(dest);//可以书写
	//printf("%s\n", src1);

	system("pause");
	return 0;
}