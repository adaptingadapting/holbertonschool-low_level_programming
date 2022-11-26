#include "lists.h"

/**
 * dlistint_len - print all the numbers of elements in a list
 * @h: name of elements
 *
 * Return: the number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	for (; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
