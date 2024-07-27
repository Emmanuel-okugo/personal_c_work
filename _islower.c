#include <stdio.h>

/**
 * _islower - entry point
 * @c: this carries the character to check
 * description: this is function replicates c's library islower
 * function
 * Return: 1 (lowercase)  0 (not lowercase)
 */

int _islower(char c)
{
	
	if (!(c < 'a' || c > 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
