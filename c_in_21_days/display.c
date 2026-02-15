/* how to print to stdin using different librbary functions */

#include <stdio.h>

int main (void)
{
	char *name = "okugo chimdindu";
	void fprint(char *say);
	void putss(char *what);

	printf("using printf\n");
	printf("name: %s\n\n", name);

	fprint(name);
	putss(name);

	return (0);

}

void fprint(char *say)
{
	puts("using fprintf");
	fprintf(stdout, "name: %s\n\n", say);
}

void putss(char *what)
{
	puts("using puts");
	puts(what);
}
