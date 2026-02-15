/**
 * display - entry point for this function
 * description: displays the sorted double numbers ;)
 * return: void
 */

#include <stdio.h>

void display(double *num[])
{
	int i = 0;

	printf("\nsorted input\n");
	do
	{
		printf("%f\n", *num[i]);
		i++;
	}
	while(i < 10);

}
