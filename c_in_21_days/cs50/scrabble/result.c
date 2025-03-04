/**
 * result - entry point to this functiom
 * description: checks payer with highest score and declares it winner
 * return: void
 */

#include <stdio.h>

void result (int player1_score, int player2_score)
{

	if (player1_score > player2_score)
	{
		printf("PLAYER 1 WINS!\n");
	}
	else if (player1_score <  player2_score)
	{
		printf("PLAYER 2 WINS!\n");
	}
	else
	{
		printf("TIE\n");
	}

}

