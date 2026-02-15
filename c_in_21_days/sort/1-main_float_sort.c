/**
 * main - entry point
 * description : sorts float numbers in 
 * return: always 0 (success)
 */

#include "main.h"
#include <stdio.h>

int main(void)
{
	double *num[10];
	int checker;

	puts("\tDOUBLE SORTER 5.00\n");

	checker = accept(num);
	if (checker == 1)
	{
		fprintf(stderr, "Memory allocation failed");
		return(-1);
	}

	sort(num);
	display(num);


	return (0);
}
