#include "lists.h"
/**
 * free_listint - hola
 * @head: head
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
