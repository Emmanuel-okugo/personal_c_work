#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main: entry point
 * description: a program that uses redirection to accept input from a disk file
 * counts the number of times each letter occurs in the file
 * and then displays the result on-screen
 * return: always 0 (success)
 */

int main(void)
{
	int letters[26];
	char *file;
	int ch, j;
	int i = 0;

	/* getting enough storage that may contain a whole file */
	file = malloc(1000000000 * sizeof(char));
	if (file == NULL)
	{
		fprintf(stderr, "storage allocation failed\n");
		exit(-1);
	}

	/* getting and storing the file */
	while((ch = getchar()) != EOF && i <= 999999999)
	{
		file[i] = ch;
		i++;
	}
	file[i] = '\0';

	/* calling occurence to do the counts */
	occurence(file,letters);
	
	
	for(i = 0, j = 'A'; i < 26; i++, j++)
	{
		printf("%c = %d\n\n", j, letters[i]);
		delay();
	}

	free(file);
	
	return (0);
}
