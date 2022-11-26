#include "lists.h"

/**
 * free_dlistint - function thata frees the list
 * @head: pointer to the first node of the list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
