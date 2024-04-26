#include <stdio.h>
/**
 * main - entry point
 * description: getting inputs and finding the largest 
 * and smallest value
 * Return: always 0 (success)
 */

int main(void)
{
#define STUDENTS 20
	int score[STUDENTS];

	int count = 0;

	int i;

	int minimum;

	int maximum;

	puts("input scores");
	for (i = 0; i < STUDENTS; i++)
	{
		scanf("%d", &score[i]);

		if (score[i] == 0)
			goto label_next;
		else 
			count = count + 1;
	}
label_next:

/*initializing minimum and maximum equal to the first score */
minimum = score[0];

maximum = score[0];

/* checking the maximum value*/
for (i = 0; i < count; i++)
{
	if (score[i] < minimum)
	       minimum = score[i];
}

/* checking for maximum value */
for (i = 0; i < count; i++)
{
	if (maximum < score[i])
		maximum = score[i];
}

printf("\nminimum: %d\n", minimum);
printf("maximum: %d\n\n", maximum);

puts("...............SUBSCRIBE FOR MORE");
return (0);
}
