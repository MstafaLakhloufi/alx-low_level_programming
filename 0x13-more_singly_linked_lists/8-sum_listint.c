#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint_t list
 * @head: pointer to the first node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
