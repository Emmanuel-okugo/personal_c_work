#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Max number of candidates */
#define MAX 9

/* Candidates have name and vote count */
typedef struct
{
    char * name;
    int votes;
} candidate;

/* Array of candidates */
candidate candidates[MAX];

/* Number of candidates */
int candidate_count;

int voter_count;

/* Function prototypes */
int vote(char * name);
void print_winner(void);

int main(int argc, char * argv[])
{
	int i;
	char * name;

	name = malloc(1000 * sizeof(char));
	if(name == NULL)
	{
		fprintf(stderr, "allocation fault(allocation failed !)\n");
		return (1);
	}

    /* Check for invalid usage */
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    /* Populate array of candidates */
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (i = 0; i <= candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    printf("Number of voters: ");
    scanf("%d", &voter_count);

    /* Loop over all voters */
    for (i = 0; i < voter_count; i++)
    {
        printf("Vote: ");
	scanf("%s", name);

        /* Check for invalid vote */
        if (!(vote(name) == 0))
        {
            printf("Invalid vote.\n");
	    i = i - 1;
        }
    }

    /* Display winner of election */
    print_winner();

    return (0);
}

/* Update vote totals given a new vote */
int vote(char * name)
{
	int i;
	/* finding the person voted for */
	for (i = 0; i < candidate_count; i++)
	{
		if (strcmp(candidates[i].name, name) == 0)
		{
			candidates[i].votes++;
			return (0);
		}
		
	}

	return (1); /* if the person voted for is not a contestant */
}

/* Print the winner (or winners) of the election */
void print_winner(void)
{
	int i, j, k;
	int check;

	for (i = 0; i < candidate_count; i++)
	{
		check = 0;
		/* finding the candidate with the highest score */
		for (j = 0; j < candidate_count; j++)
		{
			if (candidates[i].votes >= candidates[j].votes)
			{
				check++;
			}
		}

		if(check == (candidate_count))
		{
			printf("Winner(s): ");
			for (k = 0; k < candidate_count; k++) /* checking if there are candiates with the same score as the highest */
			{
				if(candidates[k].votes == candidates[i].votes)
				{
					printf(" %s", candidates[k].name);
				}
			}
			printf("\n");
			break;
		}
	}
	return;
}
