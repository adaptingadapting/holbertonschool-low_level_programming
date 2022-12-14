#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointrr to the first element
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);

	while (h)
		{
		if (!(h->n))
			printf("%d", 0);
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		i++;
		}
	return (i);
}


