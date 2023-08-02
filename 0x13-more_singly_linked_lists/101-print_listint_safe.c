#include "lists.h"
#include <stdio.h>

size_t listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t listint_len(const listint_t *head)
{
	const listint_t *newlist, *node;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	newlist = head->next;
	node = (head->next)->next;

	while (node)
	{
		if (newlist == node)
		{
			newlist = head;
			while (newlist != node)
			{
				nodes++;
				newlist = newlist->next;
				node = node->next;
			}

			newlist = newlist->next;
			while (newlist != node)
			{
				nodes++;
				newlist = newlist->next;
			}

			return (nodes);
		}

		newlist = newlist->next;
		node = (node->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, num = 0;

	nodes = listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (num = 0; num < nodes; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
