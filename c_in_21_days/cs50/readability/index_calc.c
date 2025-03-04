#include <string.h>
#include "main.h"
#include <math.h>

/**
 * index - entry point to this function
 * description: calculates the coleman-liau index
 * return: integer index
 */

int index_calc(char * string)
{
	int result;
	int numofsentences;
	int numofwords;
	int num_of_letters;
	float av_char_per_word;
	float av_sen_per_word;


	/* getting the number of letters from a function */
	num_of_letters = letters(string);
	numofwords = num_of_words(string);
	numofsentences = num_of_sentences(string);

	/* calculating the average characters per 100 words and average sentences per 100 words */
	av_char_per_word = ((float)num_of_letters / (float)numofwords) * 100.0;
	av_sen_per_word = ((float) numofsentences / (float) numofwords) * 100.0;

	result = round(0.0588 * av_char_per_word - 0.296 * av_sen_per_word - 15.8);

	return(result);
}
