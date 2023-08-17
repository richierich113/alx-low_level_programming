#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly
 * linked dlistint_t list.
 * @head: A pointer to the head of the doubly linked dlistint_t list.
 * @n: int data to store in the new node.
 * Return: the address of the new node. NULL otherwise
 * if memory allocation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *checker_node;

	checker_node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	while (checker_node->next != NULL)
	{
		checker_node = checker_node->next;
	}

	checker_node->next = new_node;
	new_node->next = NULL;
	new_node->prev = checker_node;

	return (new_node);

}
