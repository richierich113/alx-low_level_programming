#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a
 * doubly linked dlistint_t list.
 * @head: The head of the doubly linked dlistint_t list.
 *
 * Return: The sum of all the data else 0
 * if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
