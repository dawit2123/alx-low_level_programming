#include "lists.h"
/**
  * sum_listint - a function that returns the sum of all the data (n) of a listint linked list.
  * @head: pointer to first element of list.
  *
  * Return: sum of ) if list is empty.
  */
int sum_listint(listint_t *head)
{
	int result;

	result = 0;
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
