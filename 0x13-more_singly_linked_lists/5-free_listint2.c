#include "lists.h"

/**
 * free_listint2 -this  frees a linked list
 * Description - A function that frees a linked list.
 * @head: a pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head && *head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
