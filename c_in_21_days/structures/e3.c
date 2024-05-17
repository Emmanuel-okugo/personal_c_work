/* Continuing with exercise 2 (e2.c), how would you assign the value 100 to the integer member of the structure info */

#include <stdio.h>

/**
 * main - entry point
 * description: above
 * Return: always 0 (success)
 */

struct data
{
        int one;
        float two;
        float three;
}info;

int main(void)
{
	info.one = 100;

	printf("%d\n", info.one);

        return(0);
}

