#include <stdio.h>

int main(void)
{
	char *a = "hello world";

	printf("%s\t%ld\n", a, sizeof(a));

	return (0);
}
