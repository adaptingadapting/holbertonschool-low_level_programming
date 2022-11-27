#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint_tlist
 * @h: name of the lists
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
