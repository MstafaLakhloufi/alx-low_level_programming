#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: the value of node that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (num);
}
