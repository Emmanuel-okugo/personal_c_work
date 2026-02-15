#include <stdio.h>

/**
 * merge - entry point to this fucntion
 * description: sorts the two sorted parts from mergesort
 * retrun: void
 */

void merge(int arr[], int left, int mid, int right)
{
	int i, j, k;
	int rightlen;
	int leftlen;
	int right_d[(mid - left) + 1];
	int left_d[right - mid];

	/* the size of the left and right part */
	leftlen = (mid - left) + 1;
	rightlen = right - mid;


	/* copying the right digits into fake storage */
	for (i = 0, j = mid + 1; i < rightlen; i++, j++)
	{
		right_d[i] = arr[j];
	}
	
	/* copying the left digits into  fake storage */
	for (i = 0; i < leftlen; i++)
	{
		left_d[i] = arr[left + i];
	}


	for (i = 0, j = 0, k = left; k <= right; k++)
	{
		if(i < leftlen && (j >= rightlen || left_d[i] <= right_d[j]))
		{
			arr[k] = left_d[i];
		       i++;
		}
		else
		{
			arr[k] = right_d[j];
			j++;
		}

	}
}
