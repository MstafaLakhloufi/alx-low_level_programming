#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *end = head;

	if (!head)
		return (NULL);

	while (ptr && end && end->next)
	{
		end = end->next->next;
		ptr = ptr->next;
		if (end == ptr)
		{
			ptr = head;
			while (ptr != end)
			{
				ptr = ptr->next;
				end = end->next;
			}
			return (end);
		}
	}

	return (NULL);
}
