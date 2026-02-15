#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *fi_le;
	FILE *file = fopen("./test.c", "r");
	FILE *file_ = fopen("../memory/type.c", "w+");

	fi_le = malloc(220 * sizeof(char));

	fread(fi_le, sizeof(char), 220, file);
	fclose(file);
	puts(fi_le);

	fwrite(fi_le, sizeof(char), 220, file_);
	fclose(file_);

	system("vi ../memory/string.c");

	return (0);
}
