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

void gather(struct phonebook Contacts[500]);

int main(void)
{

	printf("This phone book can only save 500 contacts\n");

	gather(contacts);

	return(0);
}

/* function definition */
void gather(struct phonebook Contacts[500])
{
	int choice = 0;
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


}
