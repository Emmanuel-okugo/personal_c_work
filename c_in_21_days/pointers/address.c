#include <stdio.h>

/**
 * main - entry point 
 * description: code that shows direct and 
 * indirect access
 * Return: always 0 (success)
 */

int main(void)
{
	int var = 1;

	int *p_var;

	p_var = &var;

	printf("Direct access, var = %d\n", var);
	printf("Indirect access, var = %d\n", *p_var);

	printf("\nThe address of var = %p\n", (void*)&var);
	printf("The address of var = %p\n", (void *)p_var);

	return(0);
}
