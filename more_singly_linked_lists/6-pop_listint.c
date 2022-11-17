#include "lists.h"

/**
 * pop_listint - list
 * @head: head
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *node = NULL;
	int i;

	node = (*head)->next;
	i = (*head)->n;
	*head = node;
	return (i);
}
