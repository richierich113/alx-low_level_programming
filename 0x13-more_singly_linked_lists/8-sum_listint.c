#include "lists.h"

/**
 * sum_listint - this sums up all the data in a given linked list
 * Description - A function that sums up all the data in a given linked list.
 * @head: this is the head of the list
 *
 * Return: sum of the number
 */
int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
