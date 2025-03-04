#include <stdio.h>
/**
 * result_disp - entry point to this function
 * descripton: displays the reading level
 * return (void)
 */

void result_disp(int indx)
{
	int i = 0;
#define HIGHEST_GRADE 16

	for (i = 1; i <= HIGHEST_GRADE; i++)
	{
		if (indx == i)
		{
			printf("Grade %d\n", i);
		}
	}

	if (indx < 1)
	{
		printf("Before Grade 1\n");
	}

	if (indx > 16)
	{
		printf("Grade 16+\n");
	}

}

