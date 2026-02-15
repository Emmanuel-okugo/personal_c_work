/**
 * main - entry point
 * description: sorts not more than 25 strings lexicographically
 * return: always 0 (success)
 */

#include <stdio.h>
#include "main.h"

int main(void)
{
	/* variable and functions and macros declaration */

#define MAXLINE 25

	char *string[25];
	int number_of_lines;
	int choice;

	number_of_lines = accept_str(string,MAXLINE);
	if(number_of_lines < 0)
	{
		fprintf(stderr, "Storage allocation problems!!\n");
	}

	while(1)
	{
		puts("\ninput the number for the menu");
		puts("1. ascending\t2. descending");
		puts("3. Exit");
		scanf("%d", &choice);
		if (choice == 1)
		{
			sort_asc(string, number_of_lines);
			print_str(string, number_of_lines);
		}
		else if (choice == 2)
		{
			sort_desc(string, number_of_lines);
			print_str(string, number_of_lines);
		}
		else
		{
			putchar('\n');
			break;
		}
	}

	return (0);

}
