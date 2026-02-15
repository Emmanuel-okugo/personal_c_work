/**
 * accept_str - entry point for this function
 * description: accepts strings for sorting
 * return: number_of_inputs
 */
#include <stdio.h>
#include <stdlib.h>

int accept_str(char *string[], int n)
{
        int number_of_inputs = 0;
        int i = 0;


        printf("Input strings and 0 if line is less than 25\n");
        while(i < n)
        {
                string[i] = malloc(50 * sizeof(char));
                if(string[i] == NULL)
                {
                        return(-1);
                }

                scanf("%s", string[i]);
                if(*string[i] == '0')
                {
                        break;
                }

                number_of_inputs += 1;
                i++;
        }

        return(number_of_inputs);
}

