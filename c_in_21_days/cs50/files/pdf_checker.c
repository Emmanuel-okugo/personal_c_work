#include <stdio.h>
#include <stdint.h>

int main(int argc, char * argv[])
{
	int i;
	FILE *file;
	uint8_t sig_byte[] = {0x25, 0x50, 0x44, 0x46};
	uint8_t buffer[4];

	/* check if the right number of inputs hwere inputed */
	if (argc != 2)
	{
		printf("please provide only one filename\n");
		return (1);
	}


	/* open a file */
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "couldn't open file");
		return (1);
	}

	/* read to buffer */
	fread(buffer, sizeof(uint8_t), 4, file);
	fclose(file);

	/* checking if bytes map */
	for (i = 0; i < 4; i++)
	{
		if(buffer[i] != sig_byte[i])
		{
			printf("this is not a PDF!!\n");
			return (0);
		}
	}

	printf("this is a PDF!!\n");

	return (0);
}
