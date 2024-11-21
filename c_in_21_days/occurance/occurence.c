#include <string.h>
#include <stdio.h>

/**
 * occurence: entry point for this function
 * description: checks how many time all the latters
 * appear in a provided string
 * Return: a pointer to int
 */

int occurence(char *string, int letters[])
{
	int i, j, k, l = 0;
	int strlength = 0;

	/* getting stringlength */
	strlength = strlen(string);

	/* checking for occurences */
	for (i = 'A', j = 'a'; i <= 'Z'; i++, j++)
	{
		letters[l] = 0;

		for (k = 0; k < strlength; k++)
		{
			if ((string[k] == i) || (string[k] == j))
			{
				letters[l] = letters[l] + 1;
			}

		}
			

		l++;
	}

	return (0);

}
