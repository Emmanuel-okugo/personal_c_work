#include <string.h>
/**
 *
 * num_of_sentences - entry point to this function
 * description: calculates the number of sentences in a text
 * return: the number of sentences
 */

int num_of_sentences(char * str_ing)
{
	int str_len;
	int strlength;
	int num_of_sentences = 0;
	int i;

	/* getting number of characters */
        str_len = strlen(str_ing);
        strlength = str_len - 1;  /* removing the newline character that fgets will add when we enter is hit */

        for (i = 0; i < strlength; i++)
        {

                /* getting the number of sentences */
                if(str_ing[i] == '.' || str_ing[i] == '!' || str_ing[i] == '?' || i == strlength - 1)
                {
                        if(!(str_ing[i + 1] != ' ' &&  i != strlength - 1))
                        {
                                num_of_sentences++;
                        }
                }
        }

	return (num_of_sentences);
}
