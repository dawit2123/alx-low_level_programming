#include "lists.h"
/**
  * reverse_listint - a function that reverses a listint_t.
  * @head: pointer to pointer of first list element.
  *
  * Return: pointer to first node of reversed list.
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *point, *present;

	point = NULL;
	present = NULL;
	while (*head != NULL)
	{
		present = *head;
		*head = (*head)->next;
		present->next = point;
		point = present;
	}
	*head = present;

	return (*head);
}
