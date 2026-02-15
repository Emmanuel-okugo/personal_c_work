/*  Demonstrates the fundamentals of using */
/* a linked list. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* The list data structure */
struct data
{
	char name[20];
	struct data *next;
};

/* Definetypedefs for the structure */
/* and pointers to it */
typedef struct data PERSON;
typedef PERSON *LINK;

int main(void)
{
	/* Head, new, and current element pointers */
	LINK head = NULL;
	LINK new = NULL;
	LINK current = NULL;

	/* add the first list element. we do not */
	/* assume the list is empty, although in */
	/* this demo program it always will be */

	new = (LINK)malloc(sizeof(PERSON));
	new->next = head;
	head = new;
	strcpy(new->name, "Abigail");

	/* Add an element to the end off the list */
	/* we assume the list contains at least one element */

	current = head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	new = (LINK)malloc(sizeof(PERSON));
	current->next = new;
	new->next =  NULL;
	strcpy(new->name, "catherine");

	/* Add the new element at the second position in the list */
	new = (LINK)malloc(sizeof(PERSON));
	new->next = head->next;
	head->next = new;
	strcpy(new->name, "Beatrice");

	/* print all data items in order. */
	current = head;
	while(current != NULL)
	{
		printf("\n%s", current->name);
		current = current->next;
	}
printf("\n");

return (0);
}
