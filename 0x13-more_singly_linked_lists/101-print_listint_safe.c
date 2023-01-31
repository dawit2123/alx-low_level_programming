#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - a function that counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *the_game, *the_node;
	size_t point = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	the_game = head->next;
	the_node = (head->next)->next;

	while (the_node)
	{
		if (the_game == the_node)
		{
			the_game = head;
			while (the_game != the_node)
			{
				point++;
				the_game = the_game->next;
				the_node = the_node->next;
			}

			the_game = the_game->next;
			while (the_game != the_node)
			{
				point++;
				the_game = the_game->next;
			}

			return (point);
		}

		the_game = the_game->next;
		the_node = (the_node->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t point, ref = 0;

	point = looped_listint_len(head);

	if (point == 0)
	{
		for (; head != NULL; point++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ref = 0; ref < point; ref++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (point);
}
