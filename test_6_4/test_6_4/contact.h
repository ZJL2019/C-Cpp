#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _CONTACT_H_
#define _CONTACT_H_

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
#include<Windows.h>

#define NAME_SIZE 64
#define TEL_SIZE 16
#define ADDR_SIZE 128

#define LIST_DEFAULT 5
#define CT_FILE "contact.bin";


typedef struct person{
	char name[NAME_SIZE];
	char sex;//f  m
	unsigned char age;
	char telphone[TEL_SIZE];
	char address[ADDR_SIZE];
}person_t,*person_p;

typedef struct contact{
	int cap;
	int size;
	person_t list[LIST_DEFAULT];
}contact_t, *contact_p,**contact_pp;

void InitContact();//��ʼ��
void AddPerson();//�����ϵ��
void DelPerson();//ɾ����ϵ��
void SearchPerson();//������ϵ��
void ModPerson();//�޸���ϵ��
void SortPersont();//������ϵ��
void ShowContact();//��ʾͨѶ¼
void ClearContact();//���ͨѶ¼
void SaveContact();//����ͨѶ¼
void LoadContact();//����ͨѶ¼



#endif