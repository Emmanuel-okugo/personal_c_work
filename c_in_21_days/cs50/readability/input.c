#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * description: a program that checks for the level reading of a text
 * return: always 0
 */

int main(void)
{
	const int max_num_of_char = 1000000000;
	char *sentence;
	int result;

	sentence = malloc(max_num_of_char * sizeof(char));
	if (sentence == NULL)
	{
		fprintf(stderr, "404 - storage not created\n");
		exit(1);
	}
	
	printf("input your texts\n");
	printf("NB: put space after your punctuations for result accuracy\n\n");
	if(fgets(sentence, max_num_of_char, stdin) == NULL || sentence[0] == '\n')
	{
		printf("Empty text\n");
		free(sentence);
		return (0);
	}

	result = index_calc(sentence);

	free(sentence);

	result_disp(result);

	return (0);
}
