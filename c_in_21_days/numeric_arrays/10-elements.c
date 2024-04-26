/**
 * Write a program that initializes an array of 10 elements. Each element should be equal to its subscript. the program should then print 10 elements.
 * 1 initialize array = 10
 * 2 declare i
 * 3 for i=0 i<10 i++
 * 4 print i untill i => 10
 * 5 end of for
 */
#include <stdio.h>
/**
 * main - entry point
 * description: above
 * Return: always 0 success
 */
int function(void);
int main(void)
{
	puts("press the enter key to continue");
	getchar();

	function();

	return (0);
}

int function(void)
{
	int array[10];

	int i;

	for (i = 0; i < 10; i++)
	{
		array[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", array[i]);
	}
	putchar('\n');

	return (0);
}
