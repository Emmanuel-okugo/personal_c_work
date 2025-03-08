#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point
 * description: performs cryptography with the provided key from user
 * return (0) always
 */

int main(int argc, char *argv[])
{
#define MAX_PTEXT_CHAR 1000000000
	char * plaintext = NULL;
	int i, j;
	int check_num = 0;
	int str_len;
	int key;

	/* checking for the correct number of argument */
	if (argc != 2)
	{
		fprintf(stderr, ("usage: ./ceaser key\n"));
		return (1);
	}

	/* checkng for non numbers in string */
	str_len = strlen(argv[1]);
	for (i = 0; i < str_len; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (argv[1][i] == j)
			{
				check_num++;
			}
		}
	}
	if (check_num == 0)
	{
		fprintf(stderr, "usage: ./ceaser key\n");
		return (1);
	}
	else
	{
		key = atoi(argv[1]); /* converting to int */
	}

	/* getting plaintext */
	plaintext = malloc(MAX_PTEXT_CHAR * sizeof(char));
	if (plaintext == NULL)
	{
		fprintf(stderr, "\b\b 1 - allocationfault(can't allocate storage for text\n");
		return (1);
	}
	printf("plaintext: ");
	if (fgets(plaintext, MAX_PTEXT_CHAR, stdin) == NULL)
	{
		fprintf(stderr, "\b\b1 - readfault(can't read text)\n");
		return (1);
	}
	
	encryption(key, plaintext);

	free(plaintext);
	
	return (0);
}
