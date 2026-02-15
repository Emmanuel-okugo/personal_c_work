/**
 * main - entry point
 * description: a program that displays a 12 by 12 grid
 * of Xs
 * return: always 0 (success)
 */

#include <stdio.h>
#include "main.h"

int main(void)
{
	char grid[12][12];
	int i, j;
	char (*ptr_grid)[12] = grid;
	void display(char (*ptr_grid)[12]);

	/* loading all elemnts with X :) */
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			grid[i][j] = 'X';
		}
	}


	display(ptr_grid);

	return (0);
}

/* this function prints the grid */
void display(char (*ptr_grid)[12])
{
	char *ptr = (char *)ptr_grid;
	int i, j;

	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			delay();
			printf("%c", *ptr++);
		}
		putchar('\n');
	}
}

