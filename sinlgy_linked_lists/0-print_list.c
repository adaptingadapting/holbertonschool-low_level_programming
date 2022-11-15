#include "lists.h"

/**
 * print_list - prints list
 * @h: element of struct
 *Return: something
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int i = 0;
	char *errormsg = "[0] (nil)\n";

	while (current)
	{
		if (!(current->str))
			printf("%s", errormsg);
		if (current->str)
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		i++;
	}
	return (i);
}
