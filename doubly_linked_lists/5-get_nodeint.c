#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns node to the index.
 * @head: pointer to first node of the list.
 * @index: index of the node to return.
 *
 * Return: node at index and if it does not exist Return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (p->next)
			p = p->next;
		else
			return (NULL);
	}
	return (p);
}
