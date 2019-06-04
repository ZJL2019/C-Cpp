#include"contact.h"



static int IsFull(contact_p ct)
{
	return ct->size == ct->cap ? 1 : 0;
}



static int Inc(contact_pp _ctpp)
{
	int new_size = sizeof(contact_t)+((*_ctpp)->size+INC_SIZE)* sizeof(person_t);
	contact_p p = realloc(*_ctpp, new_size);
	if (!p)
	{
		printf("Inc error!\n");
		return 0;
	}
	p->cap = (*_ctpp)->cap + INC_SIZE;
	*_ctpp = p;
	printf("Debug:Inc Contact Success!\n");
	return 1;
}


void InitContactDefault(contact_pp _ctpp)
{
	*_ctpp = (person_p)malloc(sizeof(contact_t)+sizeof(person_t)*LIST_DEFAULT);
	if (NULL == *_ctpp)
	{
		printf("%d: %s\n", errno, strerror(errno));
		exit(1);
	}

	(*_ctpp)->cap = LIST_DEFAULT;
	(*_ctpp)->size = 0;
	printf("Debug:Init Contact Success!\n");
}

int InitContactFile(contact_pp _ctpp, FILE*fp)
{
	contact_p ct_p = (contact_p)malloc(sizeof(contact_t));
	if (ct_p)
	{
		fread(ct_p, sizeof(contact_t), 1, fp);
		int _cap = ct_p->cap;
		int size = sizeof(contact_t)+ct_p->cap*sizeof(person_t);
		contact_p p = (contact_p)realloc(ct_p, size);
		if (p)
		{
			ct_p = p;
			fread(ct_p->list, ct_p->cap*sizeof(person_t), 1, fp);
			*_ctpp = ct_p;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}

}




void Show(contact_p ct)
{
	int top = ct->size;
	int i = 0;
	person_p p = ct->list;
	for (; i < top; i++)
	{
		//姓名   性别   年龄   电话   地址
		printf("%-6s|%-2c|%-3d|%-12s|%-16s|\n", p[i].name, p[i].sex, p[i].age, p[i].telphone, p[i].address);
	}
}




void ClearContatt();//清空通讯录



static int person_cmp(const void*x, const void *y)
{
	person_p _x = (person_p)x;
	person_p _y = (person_p)y;

	return strcmp(_x->name, _y->name);

}



void Sort(contact_p ct)
{
	person_p p = ct->list;
	qsort(p, ct->size, sizeof(person_t), person_cmp);
}




void AddPerson(contact_pp ct)
{
	if (!IsFull(*ct) || Inc(ct))
	{
		person_p p = &((*ct)->list[(*ct)->size]);
		printf("Please Enter Name:");
		scanf(" %s", p->name);
		printf("Please Enter Sex:");
		scanf(" %c", &(p->sex));
		printf("Please Enter Age:");
		scanf(" %u", &(p->age));
		printf("Please Enter telphone:");
		scanf(" %s", p->telphone);
		printf("Please Enter Address:");
		scanf(" %s", p->address);
		((*ct)->size)++;
	}
	else
	{
		printf("relloc error!\n");
		return;
	}
}




void DelContact();//删除联系人
void SearchContact();//查询联系人
void ModContact();//修改联系人信息

void Save(contact_p ct)
{
	FILE*fp = fopen(CT_FILE, "wb");
	if (NULL == fp)
	{
		printf("fopen error!\n");
		return;
	}
	int size = sizeof(contact_t)+ct->cap*sizeof(person_t);
	fwrite(ct, size, 1, fp);
	fclose(fp);
}



int Load(contact_pp _ctpp)
{
	FILE*fp = fopen(CT_FILE, "rb");
	if (NULL == fp)
	{
		printf("Init Conatct Default!\n");
		InitContactDefault(_ctpp);
		return 1;
	}
	int ret=InitContactFile(_ctpp, fp);
	fclose(fp);
	return ret;
}


























