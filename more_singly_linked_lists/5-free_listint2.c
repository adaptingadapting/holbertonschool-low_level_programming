#include "lists.h"

/**
 * free_listint2 - func
 * @head: head
 */

void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
