#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	printf("main: %p %p\n", &i, __builtin_frame_address(0));

	return (0);
}
