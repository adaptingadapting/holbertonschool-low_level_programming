#include "lists.h"

/**
 * get_nodeint_at_index - prints all the elements of a list
 * @h: pointrr to the first element
 * @index: ola
 * Return: number of nodes
 */

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int i = 0;

	if (!h)
		return (0);

	while (h && i < index)
		{
		if (!(h->n))
		{
			;
		}
		if (h->n)
		{
			;
		}
		h = h->next;
		i++;
		}
	return (h);
}


