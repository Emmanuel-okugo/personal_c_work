/**
 * this program was used to study the basics of linkedlistd
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct people
	{
		int Age;
		struct people *next;
	};
	struct people *new;
	struct people *head = NULL;
	int i;


	/* creating a list of 5 nodes*/
	for(i = 0; i < 5; i++)
	{
		new = malloc(sizeof(struct people));
		new->next = head;
		head = new;
	}

	puts("i think we missed the number os students");
	puts("let us make an ammendment");

	new = (struct people *)malloc(sizeof(struct people));
	new->next = head;
	head = new;


	/* inputing values on the listd */
	puts("input your age");
	while(head != NULL)
	{
		scanf("%d", &head->Age);
		head = head->next;
	}




	/* printing their age */
	head = new;
	while(head != NULL)
	{
		printf("\n%d", head->Age);
		head = head->next;
	}
	putchar('\n');

	return (0);
}
