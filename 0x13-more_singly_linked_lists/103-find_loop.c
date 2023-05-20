#include "lists.h"

/**
 * find_listint_loop - find loop in a linked list
 * @head: linked list to search
 *
 * Return: address of node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *down = head;
	listint_t *up = head;

	if (!head)
		return (NULL);

	while (down && up && up->next)
	{
		up = up->next->next;
		down = down->next;
		if (up == down)
		{
			down = head;
			while (down != up)
			{
				down = down->next;
				up = up->next;
			}
			return (up);
		}
	}

	return (NULL);
}
