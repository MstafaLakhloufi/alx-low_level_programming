#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: adress of pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);

	ne_headw->str = strdup(str);
	new_head->length = length;
	new_head->next = (*head);
	(*head) = new_head;

	return (*head);
}
