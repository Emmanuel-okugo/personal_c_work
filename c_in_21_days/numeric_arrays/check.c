#include <stdio.h>

int num[2][2];
void array(int num[][2]);
int main(void)
{
	array(num);

	return(0);
}

void array(int num[][2])
{
	int i;

	int j;
	 
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d", num[i][j]);
		}
		printf("\n");
	}

}

