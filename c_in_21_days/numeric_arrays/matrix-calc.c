/**
 * main - entry point
 * descrption: a calculator that solves matrix
 * Return: always 0 success
 */

#include <stdio.h>

int main(void)
{
	/*choices for menu*/
	int column;
	
	int row;
	
	void transpose(int column, int row, int trans[column][row]);
	
	int i;
	
	int j;

	int choice;
	
	int trans[column][row];


	/* getting dimensions*/
	puts("please input dimension");
	scanf("%d x %d", &column, &row);

	/* inputing values*/
	for(i = 0; i < column; i++)
	{
		for(j = 0; j < row; j++)
		{
			scanf("%d", &trans[i][j]);
		}
	}


	/*menu*/		
	puts("1. transpose\t2. addition");
	scanf("%d", &choice);

	if (choice == 1)
		transpose(column, row, trans);
	else
	{}
	
	return (0);
}

/* function definition*/
void transpose(int column, int row, int trans[column][row])
{
	int i;

	int j;

	int k;

	int l;

	int trans_array[row][column];

	for(i = 0, j = 0; i < row; i++, j++)
	{
		for(k = 0, l = 0; k < column; k++, l++)
		{
			trans_array[i][k] = trans[k][j];
		}
	}


	/*printing thr transpose*/
        for(i = 0; i < row; i++)
        {
                for(k = 0; k < column; k++)
                {
			printf("%d", trans_array[i][k]);
                }
		putchar('\n');
        }
}
