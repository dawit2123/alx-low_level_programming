#include "lists.h"
#include <stdlib.h> /* malloc */
#include <string.h> /* strdup */


/**
 * add_node_end - a fucntion that adds a another node at the end of a list_t linkedlist
 * @head: pointer to head of list_t linked list
 * @str:  const string for another node
 * Return: pointer to another element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *another_node = NULL, *last = NULL;
	size_t len = 0;

	while (str && str[len])
		len++;


	another_node = malloc(sizeof(*another_node));
	if (another_node)
	{
		another_node->str  = strdup(str);
		another_node->len  = len;
		another_node->next = NULL;
		if (!*head)
			*head = another_node;
		else
		{
			last = *head;
			while (last->next)
				last = last->next;
			last->next = another_node;
		}
	}
	return (another_node);
}

