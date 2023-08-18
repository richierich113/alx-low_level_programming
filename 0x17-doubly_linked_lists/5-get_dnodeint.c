#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list
 * at a specific index.
 * @head: The head of the dlistint_t list.
 * @index: The node query index
 *
 * Return: the address of the located node. NULL otherwise if
 * node doesn't exist or is NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *query_node = head;
	unsigned int i = 0;

	while (query_node != NULL)
	{
		if (i == index)
		{
			return (query_node);
		}
		query_node = query_node->next;
		i += 1;
	}

	return (NULL);
}
