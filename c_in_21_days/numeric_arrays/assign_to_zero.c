#include<stdio.h>
/**
 * main - entry point
 * description: assign 0 to all thelemnts in a multidimensonal array
 * Return: always 0 (success)
 */
int main(void)
{
	int stuff[12][10];

	int count;

	int track;

	int total = 0;

	for (count = 0; count < 12; count++)
	{
		for (track = 0; track < 10; track++)
		{
			stuff[count][track] = 0;

			if (stuff[count][track] != 0)
			{
				puts("error: assigning zero to array - NOT SUCCESSFUL");
exit:
			}
		}
	}

		for (count = 0; count < 12; count++)
		{
			for (track = 0; track < 10; track++)
			{
				total = total +1;

				printf ("\n array %d: %d", total, stuff[count][track]);
			}
		}

		puts("\nSUBSCRIBE FOR MORE");
		return (0);
}
