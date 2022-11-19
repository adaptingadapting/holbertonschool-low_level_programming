#include "lists.h"

/**
 * insert_nodeint_at_index - hola
 * @h: where
 * @idx: where
 * @number: what
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int number)
{
	unsigned int i = 0;
	listint_t *tmp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	if (*h == NULL)
		return (NULL);

	for (i = 0, tmp = *h; tmp && i < idx - 1; tmp = tmp->next, i++)
		continue;

	if (i == idx - 1)
	{
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
	return (NULL);
}
