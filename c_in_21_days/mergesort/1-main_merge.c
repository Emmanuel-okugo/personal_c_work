#include <stdio.h>
#include "main.h"

int main(void)
{
	int i, num_of_element;
	int arr[50];


	/* getting the number of elemenets in the array to sort */
	do
	{
		printf("The maximum number of digits to be sorted is 50\n");
		printf("input the number of digits: ");	
		scanf("%d", &num_of_element);
		printf("\n");
	}
	while(num_of_element >= 50 || num_of_element < 1);

	/* getting the array to sort */
	printf("digits(format: 1 2 3 4 5): ");
	for (i = 0; i < num_of_element; i++)
	{
		scanf("%d", &arr[i]);
	}

	/* calling mergesort to perform the sort */
	mergesort(arr, num_of_element - 1);

	/* printing the sorted array */
	for (i = 0; i < num_of_element; i++)
	{
		printf("%d", arr[i]);
		if (i != num_of_element - 1)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
