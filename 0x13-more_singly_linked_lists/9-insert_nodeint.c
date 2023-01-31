#include "lists.h"
/**
  * insert_nodeint_at_index - a function that inserts a new node at a given position.
  * @head: pointer to pointer of the first element on list.
  * @idx: index of list where the new node should be added.
  * @n: integer to be inserted.
  *
  * Return: address of the new node or NULL if it fails.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *another_node, *temp;
	unsigned int count;

	temp = *head;

	count = 0;
	while (temp && count < idx - 1)
	{
		temp = temp->next;
		count++;
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
		if (count + 1 == idx)
		{
			another_node->next = temp->next;
			temp->next = another_node;
			return (another_node);
		}
	}
	free(another_node);
	return (NULL);
}
