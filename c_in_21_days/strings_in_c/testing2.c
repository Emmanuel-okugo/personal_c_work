#include <stdio.h>

unsigned char ch;

int main(void)
{
	int i;

	for (ch = 0, i = 0; ch < 255; ch++, i++)
	{
		printf("ASII for %d =%c\n", i, ch);
	}

	return(0);
}
