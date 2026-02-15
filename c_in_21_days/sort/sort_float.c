/**
 * sort - entry point for this function
 * description: sort double variables in ascending order
 * return: void
 */

void sort(double *num[])
{
	double *ptr;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (*num[j] > *num[j + 1])
			{
				ptr = num[j];
				num[j] = num[j + 1];
				num[j + 1] = ptr;
			}
		}
	}
}
