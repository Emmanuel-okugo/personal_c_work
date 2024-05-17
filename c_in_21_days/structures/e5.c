/* Continuing with exercise 4 (e4.c), show two ways of using pointer notation to assign the value 5.5 to the first float member of info */

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

	(*p_info).two = 5.5;
	printf("using indirection operator and membership operator: %.2f\n", (*p_info).two);
	p_info->two = 5.5;
	printf("using indirect membership operator: %f\n\n", p_info->two);

        printf("with info: %d\nwith pointer to info: %d\n", info.one, p_info->one );

        return(0);
}


