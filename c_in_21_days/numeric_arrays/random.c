#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 * description: assigning random numbers to 2d-array
 * Return: always 0 (success)
 */
int main(void)
{
	int random[5][4];

	int count;

	int track;

	for (count = 0; count < 5; count++)
	{
		for (track = 0; track < 4; track ++)
		{
			random[count][track] = rand();
		}
	}

	for (count = 0; count < 5; count++)
	{
		for (track = 0; track < 4; track++)
		{
			printf("random[%d][%d]:%d\n", count, track, random[count][track]);
		}
	}

	return (0);
}

