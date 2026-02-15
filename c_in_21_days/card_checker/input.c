#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
#define MAX_CARD_NUM 20
	int i;
	char j;
	char * cardnum;
	int card_len;

	/* creating memory space for the card number */
	cardnum = malloc(MAX_CARD_NUM * sizeof(char));
	if (cardnum == NULL)
	{
		fprintf(stderr, "storage allocation fault");
		exit(1);
	}

	/* reading the string */
	printf("card number: ");
	if(fgets(cardnum, MAX_CARD_NUM, stdin) == NULL)
	{
		printf("INVALID CARD NUMBER\n");
	}

	/* checking if the number inputed > 19 characters */
	card_len = strlen(cardnum);
	if ((card_len == 19) && (getchar() != '\n'))
	{
		printf("INVALID CARD NUMBER\n");
		return (0);
	}

	/* checking if the number inputed < 14 characters */
	if (card_len < 14)
	{
		printf("INVALID CARD NUMBER\n");
		return (0);
	}

	/* scanning for characters that are not numbers */
	for (i = 0; i < card_len; i++)  /* each char in string */
	{
		for (j = '0'; j <= '9'; j++)
		{
			if(cardnum[i] == j)
			{
				break;
			}
		}

		if((j + 0) > ('9' + 0)) /* check the ascii value of the j and 9 */
		{
			printf("INVALID CARD NUMBER\n");
			break;
		}
	}

	puts(cardnum);
	

	return (0);
}
