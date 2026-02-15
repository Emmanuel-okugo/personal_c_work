#include <stdio.h>

int recursion(int num[], int len);
int recurs(int num[], int len, int st, int end);
int main(void)
{
	int num[] = {1, 3, 5, 6};
	int nums;


	nums = recursion(num, sizeof(num) / sizeof(int));
	return (0);
}

int recursion(int num[], int len)
{
	return (recurs(num, len, 0, len - 1));
}

recurs(int num[], int len, int st, int end)
{
	int m = 0;

	if (m > end)
	{
		return (m)
	}




