#include "lists.h"
#include <string.h>
/**
 * add_node - returns list len
 * @h: head
 * @str: string
 * Return: len
 */

list_t *add_node(list_t **h, const char *str)
{
	list_t *node = NULL;
	char *str2 = strdup(str);

	node = (list_t *)malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	if (!str2)
		free(node);
	node->str = str2;
	node->len = strlen(str2);
	node->next = *h;
	*h = node;
	return (*h);
}
