/**
 * main - entry point
 * description: takes strings untill * is encountered
 * Return: alaway 0 (success)
 */

#include <stdio.h>

int main(void)
{
	char string[30];
	int i = 0;
	int str;

	while((str = getchar()) != '\n' && i < 29)
	{
		string[i] = str;

		if(string[i] == '*')
		{
			string[i] = '\0';
			break;
		}
		i++;
	}

	string[i] = '\0';
	
	
	printf("string: %s\n", string);

	return (0);
}
