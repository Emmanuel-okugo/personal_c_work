/*Write a function that copies one array of character into another */

#include <stdio.h>

/**
 * main - entry point
 * description: above
 * Return: always 0 (success)
 */

char firstname[20];

char lastname[20];

void copy(char firstname[20], char lastname[20]);

int main(void)
{
	printf("First Name: ");
	scanf("%s", firstname);

	printf("Last Name: ");
	scanf("%s", lastname);
	putchar('\n');

	/*function calling */
	copy(firstname, lastname);

	return(0);
}

void copy(char firstname[20], char lastname[20])
{

int i;

char newfirst_name[20];

char newlast_name[20];

for (i = 0; i < 20; i++)
{
	newfirst_name[i] = lastname[i];
	newlast_name[i] = firstname[i];
}

printf("\nFirst Name:%s\n", newfirst_name);
printf("Last Name:%s\n", newlast_name);

printf("\nWas it misplaced?,  that was the plan\n");
}
