#include <stdio.h>
#include <stdlib.h>

/**
 * main - enrty point
 * description: numbers each line of a file
 * return: always 0
 */

int main(int argc, char *argv[])
{
	FILE *file;
	char *buffer = NULL;
	size_t size = 0;
	int i = 1;

	/* checking num of argument passed */
	if (argc  != 2)
	{
		printf("Usage: ./fline_num filename\n");
		return (1);
	}

	/* opening the file */
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stdout, "Error opening file!!\n");
		return(1);
	}

	/* reading and printing each line */
	while (getline(&buffer, &size, file) != -1)
	{
		printf("%d. %s\n", i++, buffer);
	}


	free(buffer);
	fclose(file);

	return (0);
}
