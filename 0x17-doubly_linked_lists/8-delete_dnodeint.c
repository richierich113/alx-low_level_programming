#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a dlistint_t list.
 * @head: A pointer to the pointer to the head of the dlistint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)  // Delete the first node
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)

			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	current = *head;
	for (unsigned int i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)  // Check if the index is out of bounds
		return (-1);

	temp = current->next;
	current->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = current;
	free(temp);
	return (1);
}
