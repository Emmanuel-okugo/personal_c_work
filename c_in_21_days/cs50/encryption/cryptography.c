#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * man - entry point
 * description: accepts a string and encrypts it with the user's choice of key
 * return: always 0 success
 */

int main(int argc, char *argv[])
{
#define MAX_KEY_CHAR 26
#define MAX_CHAR_POSSIBLE 1000000000
        int i;
        int str_len;
	char *plaintext;
	int dupcheck;

	/* checking the number of arguments passed */
        if (argc != 2)
        {
                fprintf(stderr, "\b1 - format: ./cryptography key\n");
                fprintf(stderr, "1 - key: one argument, should not have space\n");
                return (1);
        }

	/* checking for non alphabet characters */
        str_len = strlen(argv[1]);
        for (i = 0; i < str_len; i++)
	{
		if (isalpha(argv[1][i]) == 0)
		{
			fprintf(stderr, "\b1 - unexpected token found!\n");
			printf("\b");
			return (1);
		}
	}
       
	/* checking for the number of charcaters in the key */
	if(str_len != MAX_KEY_CHAR)
	{
		fprintf(stderr, "\b1 - key should be 26 characters\n");
		return (1);
	}

	/* function calling to check duplicate characters */
        dupcheck = mixedchar_key_checker(argv[1]);
        if (dupcheck == 0)
        {
                fprintf(stderr, "\b1 - duplicate token found\n");
                return (1);
        }

	/* getting the text */
	plaintext = malloc(MAX_CHAR_POSSIBLE * sizeof(char));
	if(plaintext == NULL)
	{
		fprintf(stderr, "\b1 - segmentation fault(allocation dump)\n");
		return (1);
	}
	printf("plaintext: ");
	if (fgets(plaintext, MAX_CHAR_POSSIBLE, stdin) == NULL)
	{
		fprintf(stderr, "\b1 - couln't read text \n");
		return (1);
	}

	/* calling the function to encrypt and prinnt the encryption */
	cypher_gen(argv[1], plaintext);

	return (0);
}
