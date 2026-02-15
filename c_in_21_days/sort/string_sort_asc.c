/**
 * sort_asc - entry point to this function
 * description: sorts n number of strings in ascending order
 * from A - Z
 * retun: void
 */

#include <string.h>

void sort_asc(char * string[], int m)
{
        char *holder;
        int str_value = 0;
        int i = 0, j = 0;


        for(i = 0; i < m; i++)
        {
                for(j = 0; j < m-1; j++)
                {
                        if((str_value = strcmp(string[j], string[j+1])) > 0)
                        {
                                holder = string[j];
                                string[j] = string[j + 1];
                                string[j + 1] = holder;
                        }
                }
        }
}

