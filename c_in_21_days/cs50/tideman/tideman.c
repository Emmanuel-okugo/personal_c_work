#include <cs50.h>
#include <stdio.h>

// Max number of candidates
#define MAX 9

// preferences[i][j] is number of voters who prefer i over j
int preferences[MAX][MAX];

// locked[i][j] means i is locked in over j
bool locked[MAX][MAX];

// Each pair has a winner, loser
typedef struct
{
    int winner;
    int loser;
} pair;

// Array of candidates
string candidates[MAX];
pair pairs[MAX * (MAX - 1) / 2];

int pair_count;
int candidate_count;

// Function prototypes
bool vote(int rank, string name, int ranks[]);
void record_preferences(int ranks[]);
void add_pairs(void);
void sort_pairs(void);
void lock_pairs(void);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: tideman [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i] = argv[i + 1];
    }

    // Clear graph of locked in pairs
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            locked[i][j] = false;
        }
    }

    pair_count = 0;
    int voter_count = get_int("Number of voters: ");

    // Query for votes
    for (int i = 0; i < voter_count; i++)
    {
        // ranks[i] is voter's ith preference
        int ranks[candidate_count];

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }

        record_preferences(ranks);

        printf("\n");
    }

    add_pairs();
    sort_pairs();
    lock_pairs();
    print_winner();
    return 0;
}

// Update ranks given a new vote
bool vote(int rank, string name, int ranks[])
{
	int i;

	for (i = 0; i < candidate_count; i++)
	{
		if (strcmp(candidates[i], name) == 0)
		{
			ranks[rank] = i;
			return true
		}
	}
	
	return false;
}

// Update preferences given one voter's ranks
void record_preferences(int ranks[])
{
	int i, j, k;

	for (i = 0; i < candidate_count; i++) // 1st candidate
	{
		for (j = 0; j < candidate_count; j++) // 2nd candidate 
		{
			preferences[i][j] = 0; // equating the current preference count to 0

			for (k = 0; k < candidate_count; k++)
			{
				if(rank[i] == i)
				{
					position1 = k;
				}

				if(rank[j] == j)
				{
					position2 = k;
				}
			}

			if (position1 < position2)
			{
				preferences[i][j]++;
			}
		}
	}
    return;
}

// Record pairs of candidates where one is preferred over the other
void add_pairs(void)
{
	int i, j;
	int k = 0;

	for (i = 0; i < candidate_count; i++)
	{
		for (j = 0; j < candidate_count; j++)
		{
			if (preferences[i][j] > preferences[j][i])
			{
				pairs.winner[k] = i;
				pairs.loser[k] = j;
				k++;
				pair_count++;
			}
		}
	}
    return;
}

// Sort pairs in decreasing order by strength of victory
void sort_pairs(void)
{
	void recursion(pair pairs, int left, int right);
	recursion(pairs, 0, pair_count);
	return;
}

// function that performs the spliting
void recursion(pair pairs, int left, int right)
{
	int mid;
	void merge(pair pairs, mid, right, left);

	if (left < right)
	{
		mid = left + (right - left)/2;

		recursion(pairs, left, mid);
		recursion(pairs, mid + 1, right);

		merge(pairs, mid, right, left);
	}
}

//the function that does the merge

void merge(pair pairs, mid, right, left)
{
	int i, j, k;
        int rightlen;
        int leftlen;
        int right_d[(right - mid)];
        int left_d[(mid - left) + 1];

        /* the size of the left and right part */
        leftlen = (mid - left) + 1;
        rightlen = right - mid;


        /* copying the right digits into fake storage */
        for (i = 0, j = mid + 1; i < rightlen; i++, j++)
        {
                right_d[i] = pairs[j].winner;
        }

        /* copying the left digits into  fake storage */
        for (i = 0; i < leftlen; i++)
        {
                left_d[i] = pairs[left + i].winner;
        }


        for (i = 0, j = 0, k = left; k <= right; k++)
        {
                if(i < leftlen && (j >= rightlen || left_d[i] >= right_d[j]))
                {
                        pairs.[k].winner = left_d[i];
                       i++;
                }
                else
                {
                        pairs[k].winner = right_d[j];
                        j++;
                }

        }
}

// Lock pairs into the candidate graph in order, without creating cycles
void lock_pairs(void)
{
    // TODO
    return;
}

// Print the winner of the election
void print_winner(void)
{
    // TODO
    return;
}
