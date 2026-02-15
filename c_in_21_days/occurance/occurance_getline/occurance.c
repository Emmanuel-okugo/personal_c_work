#include <string.h>

/**
 * occurance - entry point to this function
 * desccription: calculates the number of A to Z each in a buffer
 * @alphabets: pointer to array where the sum is stored for each letter
 * @buffer: pointer to the buffer
 * return: void
 */

void occurance(int *alphabets, char *buffer)
{
	char lowercase;
	char uppercase;
	int i, j;
	int strlength;


	/* getting the lenght of buffer */
	strlength = strlen(buffer); 

	/* calculating the characters */
	for (i = 0; i < strlength; i++)
	{
		j = 0;
		for (lowercase = 'a', uppercase = 'A'; lowercase <= 'z'; lowercase++, uppercase++)
		{
			if (buffer[i] == lowercase || buffer[i] == uppercase)
			{
				alphabets[j]++;
				break;
			}

			j++;
		}
	}
}
