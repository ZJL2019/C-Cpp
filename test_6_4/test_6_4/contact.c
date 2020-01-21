#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContactDefault(contact_pp _ctpp)
{
	(*_ctpp)->cap = LIST_DEFAULT;
	(*_ctpp)->size = 0;
	printf("Debug:Init Contact Success!\n");
}


void ShowContact(contact_p ct)
{
	int top = ct->size;
	int i = 0;
	person_p p = ct->list;
	for (; i < top; i++)
	{
		printf("%-6s|%-2c|%-3d|%-12s|%-16s|\n", p[i].name, p[i].sex, p[i].age, p[i].telphone, p[i].address);
	}
}