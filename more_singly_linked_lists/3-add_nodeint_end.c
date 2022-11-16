#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - returns list len
 * @h: head
 * @number: string
 * Return: len
 */

listint_t *add_nodeint_end(listint_t **h, const int number)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	if (!*h)
	{
		*h = node;
		node->n = number;
		node->next = NULL;
		return (node);
	}
	node = *h;
	while (node->next)
		node = node->next;

	node->next = malloc(sizeof(listint_t));
	node = node->next;
	node->n = number;
	node->next = NULL;

	return (node);
}
