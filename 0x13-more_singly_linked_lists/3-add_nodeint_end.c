#include "lists.h"
/**
  * add_nodeint_end - a function that adds a new node at the end of a listint_t list.
  * @head: pointer to pointer of first element of list.
  * @n: element to be added in the list.
  *
  * Return: address of the new element or NULL if it fails.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *another_nodeint, *final_nodeint;

	another_nodeint = malloc(sizeof(listint_t));
	if (another_nodeint == NULL)
		return (NULL);

	another_nodeint->n = n;
	another_nodeint->next = NULL;

	/* if head is a null pointer, assign new node to it*/
	if (*head == NULL)
		*head = another_nodeint;

	else
	{
		final_nodeint = *head;

		while (final_nodeint->next != NULL)
			final_nodeint = final_nodeint->next;

		final_nodeint->next = another_nodeint;
	}

	return (another_nodeint);
}
