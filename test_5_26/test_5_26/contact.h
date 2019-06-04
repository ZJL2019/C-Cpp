#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <Windows.h>


#define NAME_SZIE 64//名字数组大小
#define TEL_SIZE 16//电话数组大小
#define ADDR_SIZE 128//地址数组大小

#define LIST_DEFAULT 1 //通讯录容量大小
#define INC_SIZE 2//通讯录每次扩展大小
#define CT_FILE "contatct.bin"//通讯录文件


typedef struct person{
	char name[NAME_SZIE];
	char sex;//'f','m'
	unsigned char age;
	char telphone[TEL_SIZE];
	char address[ADDR_SIZE]; 
}person_t, *person_p, **person_pp;//用户信息结构体



typedef struct contact{
	int cap;//容量
	int size;//当前有效容量
	person_t list[0];//柔型数组，用于扩展通讯录开辟空间
}contact_t,*contact_p,**contact_pp;//通讯录结构体


static int IsFull(contact_p ct);//容量已满
static int Inc(contact_pp ctpp);//扩容

void InitContactDefault(contact_pp _ctpp);//初始化，不需加载
int InitContactFile(contact_pp _ctpp);//初始化，需要加载
void Show(contact_p ct);//显示通讯录
void ClearContatt();//清空通讯录
void Sort(contact_p ct);//联系人排序
void AddPerson(contact_p ct);//增加联系人
void DelContact();//删除联系人
void SearchContact();//查询联系人
void ModContact();//修改联系人信息
//save//保存文件
void Save(contact_p ct);
//load//加载文件
int load(contact_pp _ctpp);

#endif