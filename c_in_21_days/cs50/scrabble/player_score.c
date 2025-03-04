/**
 * player_score - entry point for this function
 * description: calculates the score of player's word
 * return: score 
 */

int player_score (int string_len, char player_word[])
{
	int char_point[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 4 };
	int score = 0;
	int numofalphabets = 26;
	int i, j;

	for (i = 0; i < string_len; i++)
	{

		char uppercase = 'A';
		char lowercase = 'a';

		for (j = 0; j < numofalphabets ; j++)
		{
			if (player_word[i] == uppercase || player_word[i] == lowercase)
			{
				score += char_point[j];
				break;
			}

			uppercase++;
			lowercase++;
		}
	}

	return (score);

}


