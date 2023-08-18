#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * at a specific index.
 * @head: The head of the dlistint_t list.
 */
 void free_dlistint(dlistint_t *head)
	dlistint_t *tmp;

	while (head != NULL)
	{
		head->next = tmp;
		free(head);
		head = tmp;
	}

}
