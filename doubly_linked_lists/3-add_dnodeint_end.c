#include "lists.h"

/**
 * add_dnodeint_end - add a new node to d ened of the list.
 * @head: pointer to a pointer to head node
 * @n: node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tem = malloc(sizeof(dlistint_t)), *p;

	if (tem == NULL)
	return (NULL);
	if (*head == NULL)
	{
		*head = tem;
		tem->n = n;
		tem->next = NULL;
		tem->prev = NULL;
		return (tem);
	}
	tem = *head;
	while (tem->next)
		tem = tem->next;
	tem->next = malloc(sizeof(dlistint_t));
	p = tem;
	tem = tem->next;
	tem->n = n;
	tem->next = NULL;
	tem->prev = p;
	return (tem);
}
