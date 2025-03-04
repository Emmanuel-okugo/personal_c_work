#include <stdio.h>

/**
 * validity - entry point to this function
 * description: checks for validity of the card and the firm the card belongs to
 * return: void
 */

void validity(long * extract, int final_sum, int num_of_digits)
{
#define VISA 4

	if(final_sum % 10 == 0)
	{
		if(*extract / 10 == VISA && (num_of_digits == 13 || num_of_digits == 16))
		{
			printf("VISA\n");
		}
		else
		{
			switch(*extract)
			{
				case 34: { }
				case 37:
					 {
						 if(num_of_digits == 15)
						 {
							 printf("AMEX\n");
							 break;
						 }
						 break;
					 }
				case 51: { }
				case 52: { }
				case 53: { }
				case 54: { }
				case 55: 
					 {
						 if(num_of_digits == 16)
						 {
							 printf("MASTERCARD\n");
							 break;
						 }
						 break;
					 }
				default:
					 {
						 printf("INVALID\n");
					 }
			}
	
		}
	}
        else
	{
		printf("INVALID\n");
        }

}
