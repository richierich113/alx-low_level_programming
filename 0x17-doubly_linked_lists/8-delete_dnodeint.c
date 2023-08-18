#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given
 * index in a dlistint_t list.
 * @head: A pointer to the pointer to the head of the dlistint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (!head || !(*head))
	{
		return (-1);
	}
	else
	{
		temp = *head;

		while (index != i++ && temp)
			temp = temp->next;
		if (!temp)
			return (-1);
		if (temp->next)
			temp->next->prev = temp->prev;
		if (index == 0)
			*head = temp->next;
		else
			temp->prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
