#include "hash_tables.h"


/**
 * hash_table_print - Prints a hash table
 *
 * @ht: A pointer to the hash table to print
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	uint64_t i;
	bool printComma = false;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (printComma)
				printf(", ");

			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node)
					printf(", ");
			}
			printComma = true;
		}
	}
	printf("}\n");
}
