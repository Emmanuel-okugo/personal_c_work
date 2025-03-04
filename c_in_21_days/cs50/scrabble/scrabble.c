#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{

	char player_1[50];
	char player_2[50];
        int player_1_score;
        int player_2_score;
        int str_len_1;
	int str_len_2;

	printf("time to battle, input your words\n\n");

	printf("player one: ");
	scanf("%s", player_1);

	printf("player two: ");
	scanf("%s", player_2);

	/* finding their size */
	str_len_1 = strlen(player_1);
	str_len_2 = strlen(player_2);

	/* calculating score for each player */
	player_1_score = player_score(str_len_1, player_1);
	player_2_score = player_score(str_len_2, player_2);

	result(player_1_score, player_2_score);
	return (0);

}
