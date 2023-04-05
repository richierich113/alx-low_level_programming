#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - this  deletes the head node of a linked list
 *@head: the head of the list
 *
 *Return: the deleted node data
 */
int pop_listint(listint_t **head)
{
	int retval;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = temp;
	return (retval);
}
