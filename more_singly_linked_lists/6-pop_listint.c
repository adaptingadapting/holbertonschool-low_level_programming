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

	node = malloc(sizeof(listint_t));
	node = *head;
	i = node->n;
	*head = node->next;
	return (i);
}
