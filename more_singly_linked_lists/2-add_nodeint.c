#include "lists.h"
#include <string.h>
/**
 * add_nodeint - returns list len
 * @h: head
 * @number: string
 * Return: len
 */

listint_t *add_nodeint(listint_t **h, const int number)
{
	listint_t *node = NULL;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = number;
	node->next = *h;
	*h = node;
	return (*h);
}
