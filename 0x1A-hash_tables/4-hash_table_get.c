#include "hash_tables.h"


/**
 * hash_table_get - Retrieve the value associated with key
 *
 * @ht: The table
 * @key: The key
 *
 * Return: the value associated with key in ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	uint64_t i;


	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	if (i >= ht->size)
		return (NULL);

	node = ht->array[i];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (!node)
		return (NULL);
	else
		return (node->value);
}
