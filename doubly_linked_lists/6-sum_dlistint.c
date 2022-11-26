#include "lists.h"

/**
 * sum_dlistint - function that sums the n elements of a list
 *@head: first node of thelist
 *
 * Return: sum of all the n elements of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int i, sum = 0;
	dlistint_t *p = head;

	if (head == NULL)
		return (0);
	for (i = 0; p->next; i++)
	{
		sum = sum + p->n;
		p = p->next;
	}
	sum = sum + p->n;
	return (sum);
}
