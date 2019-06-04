#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <Windows.h>


#define NAME_SZIE 64//���������С
#define TEL_SIZE 16//�绰�����С
#define ADDR_SIZE 128//��ַ�����С

#define LIST_DEFAULT 1 //ͨѶ¼������С
#define INC_SIZE 2//ͨѶ¼ÿ����չ��С
#define CT_FILE "contatct.bin"//ͨѶ¼�ļ�


typedef struct person{
	char name[NAME_SZIE];
	char sex;//'f','m'
	unsigned char age;
	char telphone[TEL_SIZE];
	char address[ADDR_SIZE]; 
}person_t, *person_p, **person_pp;//�û���Ϣ�ṹ��



typedef struct contact{
	int cap;//����
	int size;//��ǰ��Ч����
	person_t list[0];//�������飬������չͨѶ¼���ٿռ�
}contact_t,*contact_p,**contact_pp;//ͨѶ¼�ṹ��


static int IsFull(contact_p ct);//��������
static int Inc(contact_pp ctpp);//����

void InitContactDefault(contact_pp _ctpp);//��ʼ�����������
int InitContactFile(contact_pp _ctpp);//��ʼ������Ҫ����
void Show(contact_p ct);//��ʾͨѶ¼
void ClearContatt();//���ͨѶ¼
void Sort(contact_p ct);//��ϵ������
void AddPerson(contact_p ct);//������ϵ��
void DelContact();//ɾ����ϵ��
void SearchContact();//��ѯ��ϵ��
void ModContact();//�޸���ϵ����Ϣ
//save//�����ļ�
void Save(contact_p ct);
//load//�����ļ�
int load(contact_pp _ctpp);

#endif