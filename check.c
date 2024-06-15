#include "main.h"
#include <stdio.h>

int main(void)
{
	int checker;

	char chr;

	printf("input a character: ");
	scanf("%c", &chr);


	checker = _islower(chr);

	if (checker == 1)
	{
		printf("islower\n");
		return (0);
	}
	else if(checker == 0)
	{
		printf("is not lower\n");
		return (0);
	}
	else
	{
		printf("it neither 0 or 1 therefore it doesn't work\n");
	}

	printf("checker: %d\n", checker);
	return (0);
}
