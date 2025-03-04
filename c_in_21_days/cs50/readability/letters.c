#include <string.h>

/**
 * letters - entry point to this fuction
 * description: calcultes the total number of english alphabets in a text
 * return: total
 */

int letters(char *str)
{
	int str_len = strlen(str);
	char upper = 'A';	
	char lower = 'a';
	int num_of_letters = 0;
	int i,j,k;

	for (i = 0; i < str_len; i++)
	{
		for (j = upper, k = lower; j <= 'Z'; j++, k++)
		{
			if (str[i] == j || str[i] == k)
			{
				num_of_letters++;
			}
		}
	}

	return (num_of_letters);
}
