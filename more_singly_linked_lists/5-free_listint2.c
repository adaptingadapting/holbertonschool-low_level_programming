#include "lists.h"

/**
 * free_listint - d
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
/**
 * free_listint2 - func
 * @head: head
 */

void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
