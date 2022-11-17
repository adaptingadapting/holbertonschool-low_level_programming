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
	listint_t *node = *h;
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *tmp;


	if (idx == 0)
	{
		newnode->next = *h;
		newnode->n = number;
		*h = newnode;
		return (newnode);
	}

	while (node)
	{
		if (i == idx - 1)
		{
			tmp = node->next;
			node->next = newnode;
			newnode->n = number;
			newnode->next = tmp;
		}
		node = node->next;
		i++;
	}
	return (node);
}
