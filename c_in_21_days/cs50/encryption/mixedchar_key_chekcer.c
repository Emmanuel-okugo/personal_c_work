#include <ctype.h>

int mixedchar_key_checker(char *key)
{
#define MAX_CHAR 26
	int i,j;
	int checker = 0;

	for (i = 0; i < MAX_CHAR; i++)
	{
		for (j = 0; j < MAX_CHAR; j++)
		{
			if (isupper(key[i]) != 0) 
			{
				if(key[i] == key[j] || tolower(key[i]) == key[j]) /* if the uppercase version is not equal then check the lorwercase version */
				{
					checker++;
				}
			}
			else
			{
				if(key[i] == key[j] || toupper(key[i]) == key[j]) /* if the lower case version is not equal then check the uppercase version */
				{
					checker++;
				}
			}
		}

		if(checker > 1)
		{
			break;
		}
		else
		{
			checker = 0;
		}
	}


	if(checker > 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}

}
