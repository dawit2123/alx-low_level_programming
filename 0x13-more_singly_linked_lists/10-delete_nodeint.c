#include "lists.h"
/**
  * delete_nodeint_at_index - a function that deletes the node at index.
  * @head: pointer to pointer of first elemnt of list.
  * @index: index of node to be deleted.
  *
  * Return: 1 if successful, -1 if fails.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter;
	listint_t *preceding_node, *point;

	point = *head;
	counter = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = point->next;
		free(point);
		return (1);
	}

	while (point != NULL && counter < index - 1)
	{
		point = point->next;
		counter++;
		if (point == NULL || point->next == NULL)
			return (-1);
	}

	preceding_node = point->next->next;
	free(point->next);
	point->next = preceding_node;

	return (1);
}
