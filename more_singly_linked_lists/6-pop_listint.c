#include "lists.h"

/**
 * pop_listint - list
 * @head: head
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int i;

	if (!*head)
		return (0);
	*head = node->next;
	i = node->n;
	*head = node->next;
	free(node);
	return (i);
}
