#include <string.h>
/**
 * num_of_words: entrypoint to this function
 * description: calculates the number of words in a text
 * reurn: number of words
 */

int num_of_words(char * str)
{
	int strlength;
	int i;
	int num_of_words = 0;
	int str_ing;

	strlength = strlen(str);
	str_ing = strlength - 1; /* to remove te newline added by fgets when enter is hit */

	 for (i = 0; i < str_ing; i++)
        {

                /* getting number of words */
                if (str[i] == ' ' || i == str_ing - 1)
                {
                        num_of_words++;
                }
	}
	 return (num_of_words);

}
