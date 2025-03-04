#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * description: checks for validility of american express debit card
 * return: always 0
 */

int main(void)
{
#define MAX_CARD_16 9999999999999999
#define MAX_CARD_15 999999999999999
#define MAX_CARD_13 9999999999999
#define MIN_CARD_13 1000000000000
#define MIN_CARD_15 100000000000000
#define MIN_CARD_16 1000000000000000

	long card_num;
	long extract = 0;
	long *ext = &extract;
	int final_sum;
	int num_of_digit;

	/* getting the card number */
	do
	{
		printf("Card Number: ");
		scanf("%ld", &card_num);

		
		if (card_num > MIN_CARD_13 && card_num < MAX_CARD_13)
		{
			num_of_digit = 13;
			break;
		}
		else if (card_num > MIN_CARD_15 && card_num < MAX_CARD_15)
		{
			num_of_digit = 15;
			break;
		}
		else if (card_num > MIN_CARD_16 && card_num < MAX_CARD_16)
		{
			num_of_digit = 16;
			break;
		}
		else
		{
			printf("INVALID!!\n");
			return (0);

		}
	
	}
	while(1);

	/* calling final sum to  calculate the hough theorem */
	final_sum = final_Sum(num_of_digit, card_num, ext);

	validity(ext, final_sum, num_of_digit);

	return (0);
}
