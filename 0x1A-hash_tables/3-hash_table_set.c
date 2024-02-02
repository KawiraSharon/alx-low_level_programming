#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 *
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newEntry = NULL;
	char *valueCopy = NULL;
	uint64_t i = 0;
	uint64_t j = 0;

	if ((!ht) || (!key) || (*key == '\0') || (!value))
		return (-1);

	valueCopy = strdup(value);
	if (!valueCopy)
		return (-1);

	i = key_index((const unsigned char *)key, ht->size);
	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = valueCopy;
			return (0);
		}
	}

	newEntry = malloc(sizeof(hash_node_t));
	if (!newEntry)
	{
		free(valueCopy);
		return (-1);
	}
	newEntry->key = strdup(key);
	if (!(newEntry->key))
	{
		free(newEntry);
		return (-1);
	}
	newEntry->value = valueCopy;
	newEntry->next = ht->array[i];
	ht->array[i] = newEntry;

	return (0);
}
