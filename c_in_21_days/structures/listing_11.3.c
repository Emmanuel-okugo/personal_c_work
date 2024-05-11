/* Demonstrates using arrays of structures */

#include <stdio.h>

/* Define a structure to hold entries. */

struct entry 
{
	char fname[20];
	char lname[20];
	char phone[20];
};

/* declare an array of structures */

struct entry list[4];

int i;

int main(void)
{
	/* loop to input data for four people. */

	for (i = 0; i < 4; i++)
	{
		printf("\nEnter first name: ");
		scanf("%s", list[i].fname);
		printf("Enter last name: ");
		scanf("%s", list[i].lname);
		printf("Enter phone in 123-4567 format: ");
		scanf("%s", list[i].phone);
	}

	/* print two blank lines */

	printf("\n\n");

	/* loop to display data */

	for (i = 0; i < 4; i++)
	{
		printf("Name: %s %s\t", list[i].fname, list[i].lname);
		printf("\tPhone: %s\n", list[i].phone);
	}

	return(0);
}
