#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point 
 * description: a program that calculates
 * the number of A to z in a txt file
 * return: always 0
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL, uppercase;
	size_t size = 0;
	int letters[26], i;

	/* checking for argument accuracy */
	if (argc != 2)
	{
		printf("Usage: ./input file\n");
		return (1);
	}

	/* opening the file */
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error opening file\n");
		return (1);
	}

	/* assigning zero for each letter */
	zero(letters, 26);

	/* getting each line and calculating */
	while (getline(&line, &size, file) != -1)
	{
		occurance(letters, line);
	}

	/* printing the total */
	for (i = 0, uppercase = 'A'; i < 26; i++, uppercase++)
        {
                printf("%c = %d\n\n", uppercase, letters[i]);
		delay();
        }


	fclose(file);
	free(line);

	return (0);
}
