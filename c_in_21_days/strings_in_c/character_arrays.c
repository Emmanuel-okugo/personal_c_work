#include <stdio.h>

char name[8] = "chizoba";

char Name[8] = {'u', 'c', 'h', 'e', '\0'};

int main(void)
{
	printf("%s", name);
	putchar('\n');
	printf("%s", Name);
	putchar('\n');

	return(0);
}

