#include "lists.h"
/**
  * free_listint - a fucntion that frees a listint_t list.
  * @head: pointer to first list element.
  *
  * Return: void.
  */
void free_listint(listint_t *head)
{
	listint_t *point;

	while (head != NULL)
	{
		point = head;
		head = head->next;
		free(point);
	}
}
