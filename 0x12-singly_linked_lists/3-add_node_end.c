#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a  list
 * @head: address of pointer to the head node
 * @str: string to put in the new node
 *
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newçnode;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->length = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
