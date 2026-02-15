#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	ip pi;
	lol i;

	pi = malloc(5 * sizeof(lol));

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
	}


	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *pi++);
	}

	return (0);
}
