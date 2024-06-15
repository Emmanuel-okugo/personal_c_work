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

	char i;

	int count = 0;

	for (i = 'a'; i < 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}

		count = count + 1;
	}


	if (count == 25)
	{
		return (0);
	}

	return (2);

}
