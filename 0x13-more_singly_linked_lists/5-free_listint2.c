#include "lists.h"
/**
  * free_listint2 - frees a listint_t list and sets head to null.
  * @head: pointer to pointer of first element of list.
  *
  * Return: void.
  */
void free_listint2(listint_t **head)
{
	listint_t *point;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			point = *head;
			*head = point->next;
			free(point);
		}
	}
}
