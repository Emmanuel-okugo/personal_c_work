/*Write a function that accepts two strings. count the number of characters in each, and return a pointer to the longer string */

#include <stdio.h>
#include <string.h>


/**
 * main - entry point
 * description: above
 * Return: always 0 (success)
 */

char string1[20];

char string2[20];

char * string3;

int total_str_1;

int total_str_2;

char * return_pointer(char string1[20], char string2[20], int total_str_1, int total_str_2);

int main(void)
{
	/* calling the function */
	string3 = return_pointer(string1, string2, 0, 0);

/*  printing the string */
	printf("longest string: %s\n", string3);

	return(0);
}

char * return_pointer(char string1[20], char string2[20], int total_str_1, int total_str_2)
{

	/* getting string */
	printf("first string: ");
        scanf("%s", string1);
        printf("second string: ");
        scanf("%s", string2);


	total_str_1 = strlen(string1);
	total_str_2 = strlen(string2);
	

	if (total_str_1 > total_str_2)
	{
		return(string1);
	}
	else
	{
		return(string2);
	}
}
