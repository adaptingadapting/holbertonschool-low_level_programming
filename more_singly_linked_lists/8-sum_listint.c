#include "lists.h"

/**
 * sum_listint - prints all the elements of a list
 * @h: pointrr to the first element
 * Return: number of nodes
 */

int sum_listint(listint_t *h)
{
	unsigned int i = 0;
	int retvalue = 0;

	if (!h)
		return (0);

	while (h)
		{
		if (!(h->n))
		{
			;
		}
		if (h->n)
		{
			retvalue += h->n;
		}
		h = h->next;
		i++;
		}
	return (retvalue);
}


