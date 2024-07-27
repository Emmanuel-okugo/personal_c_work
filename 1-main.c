#include <stdio.h>

/**
 * main - addresses of variables
 *
 * Return: always 0.
 */
int main(void)
{
	char c;
	int n;

	printf("Address of variables 'c': %p\n", &c);
	printf("Address of variables 'n': %p\n", &n);
	return (0);
}
