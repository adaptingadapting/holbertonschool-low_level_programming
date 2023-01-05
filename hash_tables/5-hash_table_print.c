#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux = NULL;
  
	if (!ht)
		exit(1);
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			aux = ht->array[i];
			for (; aux; aux = aux->next)
				printf("\'%s\': \'%s'", aux->key, aux->value);
			printf(", ");
		}
	}
	printf("}\n");
}
