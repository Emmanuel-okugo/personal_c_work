/**
 * _toupper
 * description: converts lowercase letter to uppercase
 * return: converted char
 */

int _toupper (char c)
{
	int i, j;

	for (i = 'a', j = 'A'; j <= 'Z'; j++, i++)
	{
		if (c == i)
		{
			return (j);
		}
	}
}
