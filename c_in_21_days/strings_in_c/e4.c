/*Write code that allocates space for an 80-character string and then inputs a string from the keyboard and stores it in the allocated space*/
/*gets fumction is  no longer acceptable and is dangerous */
#include <stdio.h>
#include <stdlib.h>


char *string;

int main(void)
{

	/* aloocating space */
	string = malloc(80 * sizeof(char));

	/* checking if alocation was successful */
	if (string == NULL)
	{
		puts("failed to alocate storage for buffer!!");
		exit(1);
	}


	/*getting string*/
	gets(string);

	puts(string);

	return(0);
}
