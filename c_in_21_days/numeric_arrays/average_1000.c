#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: finding the average of 1000 integers
 * Return: always 0 (succes)
 */
int main(void)
{
#define TOTAL 1000

	int grades[TOTAL];

	int count;

	float average;
	
	int sum = 0;


	for (count = 0; count < TOTAL; count++)
	{
		grades[count] = rand();
		sum  = sum + grades[count];
	}

	/* calculating average*/
	average = sum/TOTAL;

	printf("AVERAGE:%.2f\n", average);

	for (count = 0; count < TOTAL; count++)
	{
		printf("score %d:%d\n", count + 1, grades[count]);
	}

	return (0);
}
