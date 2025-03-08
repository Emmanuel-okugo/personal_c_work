#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * encryption - entry point to this function
 * description: performs cryptography using number as key and displays it
 * return: void
 */

void encryption(int key, char *plain_txt)
{
	int i, l;
	int str_len;
	char end, beginning;
	char plain_char;

	/*calculating length of plain_txt*/
	str_len = strlen(plain_txt);

	for (i = 0; i < str_len; i++)
	{
		if (isalpha(plain_txt[i]) != 0)
		{
			/* getting char so ++ is possible */
			plain_char = plain_txt[i];
			
			/* checking the case to know how to use key */
			if (isupper(plain_char) != 0)
			{
				end = 'Z';
				beginning = 'A';
			}
			else
			{
				end = 'z';
				beginning = 'a';
			}
			/* moving char up according to key(encrypting) */
			for (l = 0; l < key; l++)
			{
				plain_char++;
				if (plain_char > end)
				{
					plain_char = beginning;
				}
			}
			
			/* saving the encrypted char */
			plain_txt[i] = plain_char;
		}
	}

	printf("ciphertext: %s", plain_txt);
}
