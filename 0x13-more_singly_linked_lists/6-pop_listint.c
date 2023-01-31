#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *point;
	int var;

	if (*head == NULL)
		return (0);

	point = *head;
	var = (*head)->n;
	*head = (*head)->next;

	free(point);

	return (var);
}
