#ifndef _TEST_H_
#define _TEST_H_
//#pragme once


#include<stdio.h>
#include<Windows.h>

//加法
int Add(int x, int y);


//测字符长度（递归）
int MyStrlen(const char *str);

//打印整型依次输出（递归）
int Print(unsigned int x);

//打印阶乘（递归）
int Fact(unsigned int x);

//打印阶乘（迭代）
int FactOne(unsigned int x);

//求第n个斐波那契数(递归）
int Fib(unsigned int x);

//求第n个斐波那契数（迭代）
int FibOne(unsigned int x);
#endif // !_TEST_H_
