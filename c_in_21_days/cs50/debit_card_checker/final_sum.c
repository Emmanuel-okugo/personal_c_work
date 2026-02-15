/**
 * final_sum - entry point to this function
 * description: exttracts the digits in the card num and performs hough theorem
 * return: final_sum
 */

int final_Sum(int max_num_of_digits, long card_number, long *extract)
{
	long first_mod;
        long incr_by_10 = 10;
        long extract_mul_sum = 0;
        long extract_sum = 0;
        int finalSum;
	long fake_extract;
        int i;

	/* extracting the numbers and summing */
	for(i = 1; i <= max_num_of_digits; i++)
	{
		/* extracting the individual numbers in the card number */
		first_mod = card_number % incr_by_10;

                if((incr_by_10 > 10) && (first_mod < (incr_by_10/10))) /* checking for zeros */
                {
                        *extract = 0;
                }
                else
                {
                        *extract = first_mod / (incr_by_10/10);
			if(first_mod >= 100) /* getting the last two digits of the card number */
			{
				fake_extract = first_mod / (incr_by_10/100);
			}
		}

                /* doing the sum */
                if(i % 2 == 0)
                {
			if((*extract * 2) > 9)
			{
				int seperate = ((*extract * 2) / 10) + ((*extract * 2) % 10);
				extract_mul_sum += seperate;
			}
			else
			{
				extract_mul_sum += (*extract * 2);
			}
                }
                else
                {
                        extract_sum += *extract;
                }

                incr_by_10 *= 10;
	}

        /* final checking of validity */
	*extract = fake_extract;
        finalSum = extract_mul_sum + extract_sum;

	return (finalSum);
}

