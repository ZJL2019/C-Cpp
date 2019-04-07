#define _CRT_SECURE_NO_WARNINGS 1
#include"mine.h"

int main()
{
	int select = 0;
	int quit = 0;
	while (!quit)
	{
		Menu();
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			Game();
			break;
		case 2:
			printf("Quit now!\n");
			quit = 1;
			break;
		default:
			printf("Select error,try again!\n");
			break;
		}
	}
	system("pause");
	return 0;
}