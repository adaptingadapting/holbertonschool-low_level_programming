#include "lists.h"

/**
 * print_list - prints list
 * @h: element of struct
 *Return: something
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	char *errormsg = "[0] (nil)\n";
	if (!h)
	  return (0);

	while (h)
	{
		if (!(h->str))
			printf("%s", errormsg);
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
