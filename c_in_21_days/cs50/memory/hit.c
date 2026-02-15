#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int main(void)
{
	string name;

	name = malloc(10 * sizeof(char));
	if (name == NULL)
	{
		fprintf(stderr, "storage allocation failt");
		return (1);
	}

	puts("type your name bellow");
	fgets(name, 10, stdin);
	if (*name == '\n')
	{
		puts("there is nothing here");
	}

	return (0);
}
