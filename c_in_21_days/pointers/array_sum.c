#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: 
 * Return: always 0 (success)
 */

int array_1[10];

int array_2[10];

int output[10];

int *ptroutp;

void sum(int array_1[10], int array_2[10], int output[10]);

int i;

int j;

int main(void)
{
	ptroutp = &output[0];


	for(i = 0; i < 10; i++)
	{
		array_1[i] = rand();
	}
	
	for(j = 0; j < 10; j++)
	{
		array_2[j] = rand();
	}

	/*fnction calling*/
	sum(array_1, array_2, output);


	/* first array*/
	printf("\n first array\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", array_1[i]);
	}


	printf("\n second array\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", array_2[i]);
	}


	printf("\nsum\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", *ptroutp++);
	}

	return(0);
}

void sum(int array_1[10], int array_2[10],  int output[10])
{	
	int i;

	ptroutp = &output[0];

	for(i = 0; i < 10; i++)
	{
		output[i] = array_1[i] + array_2[i];
	}

}
