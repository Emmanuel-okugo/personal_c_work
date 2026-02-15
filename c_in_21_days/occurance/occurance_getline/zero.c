/**
 * zero - entr ypoint to this function
 * description: assigns zero to each member
 * of an integer array
 * @letter: pointer to the array
 * @size: number of elements of the array
 * return: void
 */

void zero(int *letter, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		letter[i] = 0;
	}
}
