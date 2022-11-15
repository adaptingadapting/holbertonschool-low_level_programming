#include "lists.h"

/**
 * list_len - returns list len
 * @h: head
 * Return: len
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
