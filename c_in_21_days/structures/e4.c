/* Write a code that declares and initializes a pointer to info (continuing from e3.c) */


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

struct data *p_info;

int main(void)
{
	/* initializing the pointer */
	p_info = &info;


        info.one = 100;

        printf("with info: %d\nwith pointer to info: %d\n", info.one, p_info->one );

        return(0);
}


