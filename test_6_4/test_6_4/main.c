#include"contact.h"

void Menu()
{
	printf("##########################");
	printf("#1.Show  2.Add     3.Del##");
	printf("#4.Mod   5.Search  6.sort#");
	printf("#7.Clear 8.Save    9.Exit#");
	printf("##########################");
	printf("Please Selsct:");
}

int main()
{
	volatile int quit = 0;
	int selsct = 0;
	contact_p ct;
	while (!quit)
	{
		Menu();
		scanf("%d", &selsct);
		switch (selsct)
		{
		case 1:
			Show(ct);
			break;
		case 2:
			Add(ct)
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		}
	}
}