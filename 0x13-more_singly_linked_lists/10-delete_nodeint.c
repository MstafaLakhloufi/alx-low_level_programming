#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the first node
 * @index: index of the node to delete
 *
 * Return: 1 if it Succeeded, or -1 if it Failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *current_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		node = node->next;
		i++;
	}


	current_node = node->next;
	node->next = current_node->next;
	free(current_node);

	return (1);
}
