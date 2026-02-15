/* Demonstratae pointers and multidimensional arrays. */

#include <stdio.h>

int main(void)
{
	int multi[4][4];
	void accept(int (*ptr)[4]);
	void print(int (*ptr)[4]);

	puts("accepting..\n");
	accept(multi);

	puts("printing..\n");
	print(multi);

	return (0);

}

/* accept */

void accept(int (*ptr)[4])
{
	int i;
	int *p = (int *)ptr;

	for (i = 0; i < 16; i++)
	{
		scanf("%d", p++);
	}
}

/* print */
void print(int (* ptr)[4])
{
	int i;
	int *p = (int *)ptr;

	for (i = 0; i < 16; i++)
	{
		printf("%d\n", *p++);
	}

}
