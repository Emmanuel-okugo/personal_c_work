/**
 * main - entry point
 * descrption: a calculator that solves matrix
 * Return: always 0 success
 */

#include <stdio.h>


 /*choices for menu*/
int column;

int row;

int *ptr_col = &column;

int *ptr_row = &row;

int trans[100][100];

void transpose(int *ptr_col, int *ptr_row, int trans[][100]);

int i;

int j;

int choice;

int main(void)
{

	/* getting dimensions*/
	puts("please input dimension");
	scanf("%d %d", &column, &row);

	/* inputing values*/
	puts("please input the values");
	for(i = 0; i < column; i++)
	{
		for(j = 0; j < row; j++)
		{
			scanf("%d", &trans[i][j]);
		}
	}

	/*displaying their matrix*/
	puts("your matrix");
	for(i = 0; i < column; i++)
        {
                for(j = 0; j < row; j++)
                {
			printf("%d ", trans[i][j]);
                }
		putchar('\n');
        }



	/*menu*/
	printf("\ninput the number to perform the function\n");
	puts("1. transpose\t2. addition");
	scanf("%d", &choice);

/*checking menu choice*/
	if (choice == 1)
		transpose(&column, &row, trans);
	else
	{
		puts("Not available at the moment");
		puts("Thank you for your understanding");
	}
	
	return (0);
}

/* function definition*/
void transpose(int *ptr_col, int *ptr_row, int trans[][100])
{
	int i;

	int j;

	int k;

	int l;

	int trans_array[100][100];

	for(i = 0, j = 0; i < *ptr_row; i++, j++)
	{
		for(k = 0, l = 0; k < *ptr_col; k++, l++)
		{
			trans_array[i][k] = trans[k][j];
		}
	}

	putchar('\n');
	puts("Transpose");
	/*printing thr transpose*/
        for(i = 0; i < row; i++)
        {
                for(k = 0; k < column; k++)
                {
			printf("%d ", trans_array[i][k]);
                }
		putchar('\n');
        }
}
