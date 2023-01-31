#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *the_game, *the_node;

	if (head == NULL || head->next == NULL)
		return (NULL);

	the_game = head->next;
	the_node = (head->next)->next;

	while (the_node)
	{
		if (the_game == the_node)
		{
			the_game = head;

			while (the_game != the_node)
			{
				the_game = the_game->next;
				the_node = the_node->next;
			}

			return (the_game);
		}

		the_game = the_game->next;
		the_node = (the_node->next)->next;
	}

	return (NULL);
}
