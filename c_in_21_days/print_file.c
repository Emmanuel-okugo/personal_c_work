/**
 * main - entry point
 * description:  write a program that prints your C source files.
 * Use redirection to enter the source file, and use fprintf() to do the printing
 * return: always 0 (success)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char *source_file;
	int ch, i = 0;

	source_file = malloc(10000 * sizeof(char));
	if(source_file == NULL)
	{
		fprintf(stderr, "couldn't allocate memeory");
		exit(1);
	}


	/* getting the string */
	while((ch = getchar()) != EOF && i != 9999)
	{
		source_file[i] = ch;

		i++;
	}

	source_file[i] = '\0';


	fprintf(stdout, "%s", source_file);

	free(source_file);

	return (0);

}
