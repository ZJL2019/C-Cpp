#include "contact.h"


void Menu()
{
	printf("###########################\n");
	printf("#1.Show   2.Add     3.Del##\n");
	printf("#4.Mod    5.Search  6.Sort#\n");
	printf("#7.Clear  8.Save    9.Exit#\n");
	printf("###########################\n");
	printf("Please Selsct:  ");
}


int main()
{
	volatile int quit = 0;
	int select = 0;
	contact_p ct;
	Load(&ct);
	while (!quit)
	{
		Menu();
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			Show(ct);
			break;
		case 2:
			AddPerson(&ct);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			Sort(ct);
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			Save(ct);
			quit = 1;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}