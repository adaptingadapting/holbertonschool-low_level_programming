#include "lists.h"
#include <string.h>
/**
 * add_node_end - returns list len
 * @h: head
 * @str: string
 * Return: len
 */

list_t *add_node_end(list_t **h, const char *str)
{
	list_t *node = NULL;
	char *str2 = strdup(str);

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	if (!str2)
	{
		free(node);
		return (NULL);
	}
	if (!*h)
	{
		*h = node;
		node->len = strlen(str2);
		node->str = str2;
		node->next = NULL;
		return (node);
	}
	node = *h;
	while (node->next)
		node = node->next;

	node->next = malloc(sizeof(list_t));
	node = node->next;
	node->len = strlen(str2);
	node->str = str2;
	node->next = NULL;

	return (node);
}
