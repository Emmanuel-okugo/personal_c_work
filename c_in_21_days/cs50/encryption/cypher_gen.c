#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * cypher_gen - entry point to this function
 * description: encrypts a text with the provided key and displays the result
 * return: void
 */

void cypher_gen(char *key, char *plain_txt)
{
	int i, j, k, l;
	int str_len;
	
	str_len = strlen(plain_txt);

	for (i = 0; i < str_len - 1; i++)
	{
		for (j = 'a', k = 'A', l = 0; k <= 'Z'; j++, k++, l++)
		{
			if (plain_txt[i] == j || plain_txt[i] == k)
			{
				if(isupper(plain_txt[i]) != 0)
				{	
					plain_txt[i] = toupper(key[l]);
					break;
				}
				else
				{
					plain_txt[i] = tolower(key[l]);
					break;
				}
			}
			else
			{
				plain_txt[i] = plain_txt[i];
			}
		}
	}

	/* printing encrypted text */
	printf("ciphertext: %s", plain_txt);

	free(plain_txt);

}

