#include "lists.h"
#include <stdio.h>
/**
 * print_list - a funciton that prints all the elements of a linked list
 * @h: pointer to const list_t linked list
 * Return: size_t number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		char *fmt = "[%u] %s\n";

		if (!h->str)
			printf(fmt, 0, "(nil)");
		else
			printf(fmt, h->len, h->str);
		counter++;
		h = h->next;
	}
	return (counter);
}

