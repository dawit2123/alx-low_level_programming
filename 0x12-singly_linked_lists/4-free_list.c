#include "lists.h"
#include <stdlib.h> /* free */


/**
 * free_list - a function that frees all the nodes in a linked list
 * @head: pointer to the head of list_t linked list
 */
void free_list(list_t *head)
{
	list_t *pointer = NULL;

	while (head)
	{
		pointer = head->next;
		free(head->str);
		free(head);
		head = pointer;
	}
}
