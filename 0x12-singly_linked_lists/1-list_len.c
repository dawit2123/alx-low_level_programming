#include "lists.h"


/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: pointer to const list_t linked list
 * Return: size_t number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
