#include "main.h"

/**
 * recursion - entry point to this function
 * description: performs rrecursion to divide the digits into two
 * return: void
 */

void recursion(int arr[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = left + (right - left)/2;

		recursion(arr, left, mid);
		recursion(arr, mid + 1, right);

		merge(arr, left, mid, right);
	}
}
