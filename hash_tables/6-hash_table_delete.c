#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			free_list(node);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - frees a linked list
 * @head: pointer to the first node
 */

void free_list(hash_node_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->value);
		free(head->key);
		free(head);
	}
}
