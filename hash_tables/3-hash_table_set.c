#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - hola
 * @table: table
 * @key: key
 * @value: value
 * Return: hola
 */

int hash_table_set(hash_table_t *table, const char *key, const char *value)
{
	unsigned long int keyIdx;
	hash_node_t *node = NULL;
	char *nkey = strdup(key), *nvalue = strdup(value);

	if (!table)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node || !nkey)
	{
		if (node)
			free(node);
		if (nkey)
			free(nkey);
		if (nvalue)
			free(nvalue);
		return (0);
	}
	keyIdx = key_index((char *)nkey, table->size);
	node->key = nkey;
	node->value = nvalue;
	if (!table->array[keyIdx])
	{
		table->array[keyIdx] = node;
		node->next = NULL;
	}
	else
	{
		if (strcmp(table->array[keyIdx]->key, nkey) == 0)
		{
			free(table->array[keyIdx]->value);
			table->array[keyIdx]->value = nvalue;
			free(node->key);
			free(node);
		} else
		{
			node->next = table->array[keyIdx];
			table->array[keyIdx] = node;
		}
	}
	return (1);
}
