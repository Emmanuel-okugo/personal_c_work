#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s;
	int i, j, k;

	s = malloc(sizeof(char) * 100);
	if (s == NULL)
	{
		printf("error!!");
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for(k = 0; j < 10; j++)
			{
				sprintf(s, "%d%d%d.jpg", i, j, k);
				printf("%s\n", s);
			}
		}
	}

	return (0);
}
