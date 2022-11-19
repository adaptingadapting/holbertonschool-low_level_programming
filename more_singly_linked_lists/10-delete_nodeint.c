#include "lists.h"

/**
 * delete_nodeint_at_index - hola
 * @head: where
 * @idx: where
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *j = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (idx == 0)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (tmp = *head, i = 0; tmp && i < idx - 1; tmp = tmp->next, i++)
		continue;
	if (i == idx - 1)
	{
		j = tmp->next;
		tmp->next = j->next;
		free(j);
		return (1);
	}
	return (-1);
}
