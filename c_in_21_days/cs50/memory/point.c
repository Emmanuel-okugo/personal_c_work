#include <stdio.h>

int main(void)
{
	char a = '5';
	char *ptr = &a;
	
	printf("a: %ld\n", sizeof(a));
	printf("ptr: %ld\n", sizeof(ptr));

	return (0);
}
