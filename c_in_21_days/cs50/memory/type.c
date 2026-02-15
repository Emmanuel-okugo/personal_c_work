#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *name;
	FILE *file = fopen("type.c", "r");

	name = malloc(3 * sizeof(int));

	fread(name, sizeof(int), 3, file);

	printf("%d\n", name[0]);
	fclose(file);
	return (0);
}
