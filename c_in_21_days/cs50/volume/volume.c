/* Modifies the volume of an audio file */
/* Modifies the volume of an audio file */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

/* Number of bytes in .wav header */
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
	FILE *input, *output;
	uint8_t header[44];
	uint16_t samples;
	float factor = atof(argv[3]);



	/* Check command-line arguments */
	if (argc != 4)
	{
		printf("Usage: ./volume input.wav output.wav factor\n");
		return 1;
	}
	
	/* Open files and determine scaling factor */
	input = fopen(argv[1], "rb");
	if (input == NULL)
	{
		printf("Could not open file.\n");
		return 1;
	}
	
	output = fopen(argv[2], "wb");
	if (output == NULL)
	{
		printf("Could not open file.\n");
		return 1;
	}
	
	/* Copy header from input file to output file */
        fread(header, sizeof(uint8_t), HEADER_SIZE, input);
        fwrite(header, sizeof(uint8_t), HEADER_SIZE, output);

	/* Read samples from input file and write updated data to output file */
        while(!(feof(input)))
        {
                /* reading samples */
                fread(&samples, sizeof(uint16_t), 1, input);

                /* update the sample by factor */
                samples = samples * factor;

                /* write the updated sample to the output file */
                fwrite(&samples, sizeof(uint16_t), 1, output);
        }


	/* Close files */
	fclose(input);
	fclose(output);
	
	return (0);
}
