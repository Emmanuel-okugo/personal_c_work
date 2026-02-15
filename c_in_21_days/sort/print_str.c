/**
 * printf_str - entry point for this function
 * description: printd the sorted string
 * return: void
 */

#include <stdio.h>

void print_str(char *string[], int l)
{
        int i;

        fprintf(stdout, "\nsorted string\n");
        for (i = 0; i < l; i++)
        {
                printf("%s\n", string[i]);
        }
}

