#include <stdio.h>
#include <stdlib.h>
/** 
 * main - entry point
 * description: initialize random numbers to an array
 * Return: always 0 (success)
 */
int main(void)
{
	int eightyeight[88];

	int count;

	for (count = 0; count < 88; count++)
	{
		eightyeight[count] = rand();
	}

	for (count = 0; count < 88; count++)
	{
		printf("number %d:%d\n", count+1, eightyeight[count]);
	}
	return (0);
}
