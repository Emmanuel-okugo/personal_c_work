/**
 * main - entry point
 * description:  write a program that prints your C source files.
 * Use redirection to enter the source file, and use fprintf() to do the printing
 * and also number each line
 * return: always 0 (success)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	char *source_file;
	int ch, i = 0,j;
	int file_length;

	/* allocating memeory for file to be stored */
	source_file = malloc(1000000000 * sizeof(char));
	if(source_file == NULL)
	{
		fprintf(stderr, "couldn't allocate memeory");
		exit(1);
	}



	/* getting the string */
	while((ch = getchar()) != EOF && i != 999999999)
	{
		source_file[i] = ch;

		i++;
	}

	source_file[i] = '\0';

	/* getting file length */
	file_length = strlen(source_file);

	/* printing sourcefile */
	printf("1. ");
	for (i = 0, j = 2; i < file_length; i++)
	{
		fprintf(stdout, "%c", source_file[i]);
		
		if(source_file[i] == '\n' && i < (file_length - 1))
		{
			printf("%d. ", j++);
		}
	}

	free(source_file);

	return (0);

}
