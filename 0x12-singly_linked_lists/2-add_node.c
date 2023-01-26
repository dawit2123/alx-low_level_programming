#include "lists.h"
#include <stdlib.h> /* malloc */
#include <string.h> /* strdup */


/**
 * add_node - a function thatadds a new node at the beginning of
 *	      a list_t linked list
 * @head: pointer to head of list_t linked list
 * @str:  const string for another node
 * Return: pointer to new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *another_node = NULL;
	size_t len = 0;

	while (str && str[len])
		len++;

	another_node = malloc(sizeof(*another_node));
	if (another_node)
	{
		another_node->str  = strdup(str);
		another_node->len  = len;
		another_node->next = *head;
		*head = another_node;
	}
	return (another_node);
}

