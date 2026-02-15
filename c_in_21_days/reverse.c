#include <stdio.h>

void hello(int age)
{
	printf("big %d\n", age);
}

int main(void)
{
	int age = 5;
	hello(age);

	return (0);
}
