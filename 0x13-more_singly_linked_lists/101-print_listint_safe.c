#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Count number of unique nodes
 * @head: pointer head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *snake, *hiss;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	snake = head->next;
	hiss = (head->next)->next;

	while (hiss)
	{
		if (snake == hiss)
		{
			snake = head;
			while (snake != hiss)
			{
				nodes++;
				snake = snake->next;
				hiss = hiss->next;
			}

			snake = snake->next;
			while (snake != hiss)
			{
				nodes++;
				snake = snake->next;
			}

			return (nodes);
		}

		snake = snake->next;
		hiss = (hiss->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Print listint_t list safely.
 * @head: pointer head of the listint_t list.
 *
 * Return: number of nodes in a list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 1;

	nodes = looped_listint_len(head);

	if (nodes == 1)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 1; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
