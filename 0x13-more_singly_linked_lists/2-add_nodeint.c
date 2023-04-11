#include "lists.h"

/**
 * add_nodeint - it  adds a node to the beginning of a linked list
  * Description - A function that adds a node to the beginning of a linked list
 * @head: a pointer to the head of the list
 * @n: integer variable to be used
 *
 * Return: the  address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
