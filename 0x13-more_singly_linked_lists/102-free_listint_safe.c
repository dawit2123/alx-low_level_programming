#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - a function that counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *the_game, *the_node;
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
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t point, index;

	point = looped_listint_count(*h);

	if (point == 0)
	{
		for (; h != NULL && *h != NULL; point++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < point; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (point);
}
