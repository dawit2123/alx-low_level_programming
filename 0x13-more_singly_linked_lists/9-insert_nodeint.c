#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: pointer to pointer of the first element on list.
  * @idx: index of list where the new node should be added.
  * @n: integer to be inserted.
  *
  * Return: address of the new node or NULL if it fails.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *another_node, *pop_listint;
	unsigned int counter;

	pop_listint = *head;

	counter = 0;
	while (pop_listint && counter < idx - 1)
	{
		pop_listint = pop_listint->next;
		counter++;
	}

	another_node = malloc(sizeof(listint_t));
	if (another_node != NULL)
	{
		another_node->n = n;
		if (idx == 0)
		{
			another_node->next = *head;
			*head = another_node;
			return (another_node);
		}
		if (counter + 1 == idx)
		{
			another_node->next = pop_listint->next;
			pop_listint->next = another_node;
			return (another_node);
		}
	}
	free(another_node);
	return (NULL);
}
