/* This is a work in progress */

#include <stdio.h>

/**
 * main - entry point
 * description: this is a phone book
 * Return: always 0 (success)
 */

struct phonebook
{
	char fname[20];
	char lname[20];
	char phonenumber[20];
}contacts[500];

int menu_choice;

int choice;

int gather(struct phonebook Contacts[500], int choice);

int display(struct phonebook contacts[500], int choice);

int main(void)
{

	printf("This phone book can only save 500 contacts\n");


	 /* menu */
	do
	{
		puts("input the number to perform the function");
		puts("1. save \t 2. view");
		puts("3. close");
		scanf("%d", &menu_choice);
		
		if (menu_choice == 1)
		{
			gather(contacts, 0);
		}
		else if(menu_choice == 2)
		{
			display(contacts, 0);
		}
		else if(menu_choice != 3)
		{
			printf("\nInvalid choice\n");
		}
		else
		{
			{ }
		}
	}
	while(menu_choice != 3);



	return(0);
}

/* function definition for saving*/
int gather(struct phonebook Contacts[500], int choice)
{
	int i = 0;

	printf("\nhow many contacts do you want to save?: ");
	scanf("%d", &choice);

	while(i < choice)
	{
		printf("\nFirst Name: ");
		scanf("%s", Contacts[i].fname);
		printf("Last Name: ");
		scanf("%s", Contacts[i].lname);
		printf("Phone Number: ");
		scanf("%s", Contacts[i].phonenumber);
		i++;
	}
	if(Contacts[0].fname == NULL)
		puts("\ncontact saving failed");
	else
		puts("\nsuccessful");

	return(6);
}

/* function definition for display */
int display(struct phonebook contacts[500], int choice)
{
	int i;

	for (i = 0; i < choice; i++)
	{
		printf("\nFirst Name: %s\n", contacts[i].fname);
		printf("Last Name: %s\n", contacts[i].lname);
		printf("Phone number: %s\n", contacts[i].phonenumber);
	}
	return(6);
}
