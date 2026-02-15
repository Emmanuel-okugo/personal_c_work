#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int menu_choice;
	int menu(void);


	while(1)
	{
		menu_choice = menu();

		switch (menu_choice)
		{
			case 1:
				system("ls");
				break;
			case 2:
				system("ls -l");
				break;
			case 3:
				system("ls -lp");
				break;
			case 4:
				system("ls -m");
				break;
			case 5:
				exit(0);
			default:
				puts("invalid menu choice");
		}
	
	}

	return (0);
}

int menu(void)
{
	int menu_choice;

	printf("input the numbers to perform the command\n");
	puts("1. ls       2. ls -l");
	puts("3. ls -lp   4. ls -m");
	puts("5. End\n");
	scanf("%d", &menu_choice);

	return (menu_choice);

}

