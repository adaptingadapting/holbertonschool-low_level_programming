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
	if (!h)
		h = malloc(sizeof(list_t));

	
	list_t *node = *h;
	char *str2 = strdup(str);
	int i;
	
	
	while (node)
	{
	    node = node->next;
	}
	node->next = malloc(sizeof(list_t));
	if (!node->next)
		return (NULL);
}
