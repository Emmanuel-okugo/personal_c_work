#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char * argv[])
{

	int i;
	int filenum = 0;
	FILE *memcard;
	FILE *jpgfile;
	uint8_t *block;
	char fname[8];
	int pattern[4] = { 0xff, 0xd8, 0xff, 14};
	int jpeg = 0;
	int firsttime = 0;


	/* checking number of command line argument */
	if(argc != 2)
	{
		printf("./recover filename\n");
		return (1);
	}

	/* opening the memory card to reead from it */
	memcard = fopen(argv[1], "r");
	if (memcard ==	NULL)
	{
		printf("Error accessing memory card!! ):\n");
		return (1);
	}

	/* creating 512 bytes of memory */
	block = malloc(sizeof(uint8_t) * 512);


	while (fread(block, sizeof(uint8_t), 512, memcard) != 0)
	{
		/* looking for jpeg pattern */
		for (i = 0; i < 4; i++)
		{
			if(i == 3) /* now at the last one */
			{
				if (block[3] >> 4 == pattern[i])
				{
					jpeg = 1;
				}
			}
			else
			{
				if (pattern[i] != block[i])
				{
					break;
				}
			}
		}


		/* checking if jpeg has been found before to decide how to read */
		if (firsttime == 0)
		{
			if (jpeg == 1)
			{
				sprintf(fname, "%03d.jpg", filenum++);			
				jpgfile = fopen(fname, "w");	/* opening file */
				if(jpgfile == 	NULL)
				{
					printf("Error opening a file");
					return (1);
				}
			
				fwrite(block, sizeof(uint8_t), 512, jpgfile);
				firsttime = 1;
			}
		}
		else
		{
			if (jpeg == 1)
			{

				sprintf(fname, "%03d.jpg", filenum++);

				jpgfile = fopen(fname, "w");
				if (jpgfile == NULL)
				{
					printf("Error occured\n");
					return (1);
				}

				fwrite(block, sizeof(uint8_t), 512, jpgfile);
			}
			else
			{
				fwrite(block, sizeof(uint8_t), 512, jpgfile);
			}
		}
		jpeg = 0;
	}


	/* closing all dynamically allocated memory and files */
	fclose(memcard);
	free(block);
	fclose(jpgfile);

	return (0);
}
