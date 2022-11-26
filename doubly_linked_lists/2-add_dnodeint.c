#include "lists.h"

/**
 * add_dnodeint - function that add a new node ot de beginning of hte list.
 * @head: head
 * @n: n
 *
 * Return:  the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t = malloc(sizeof(dlistint_t));

	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	t->n = n;
	t->next = *head;
	if (*head)
		(*head)->prev = t;
	*head = t;
	return (t);
}
