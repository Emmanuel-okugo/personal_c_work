/**
 * accept - entry point for this function
 * description: this inputs float
 * return: 0 when successful, 1 when failed
 */

#include <stdio.h>
#include <stdlib.h>

int accept(double *num[])
{
	int i = 0;

	/* creating storage to point to */
	while (i < 10)
	{
		num[i] = malloc(sizeof(double));
		if (num[i] == NULL)
		{
			return (1);
		}

		i++;
	}


	puts("only decimal numbers are allowed");
	puts("input decimal numbers");

	/* accepting inputs */
	for (i = 0; i < 10; i++)
	{
		if (scanf("%lf", num[i]) == 0)
		{
			printf("Invalid Number\n");
			i--;
		}
	}

	return (0);

}

