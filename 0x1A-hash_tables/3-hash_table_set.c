#include "hash_tables.h"

/**
 * hash_table_set - prog updates/adds element in hash table.
 * @ht: ptr of hash table.
 * @key: key being added; non-empty string.
 * @value: value assctd with the hash key.
 *
 * Return: failure for 0/1 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptrNew;
	char *copiedValue;
	unsigned long int idx, y;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copiedValue = strdup(value);
	if (copiedValue == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (y = idx; ht->array[y]; y++)
	{
		if (strcmp(ht->array[y]->key, key) == 0)
		{
			free(ht->array[y]->value);
			ht->array[y]->value = copiedValue;
			return (1);
		}
	}

	ptrNew = malloc(sizeof(hash_node_t));
	if (ptrNew == NULL)
	{
		free(copiedValue);
		return (0);
	}
	ptrNew->key = strdup(key);
	if (ptrNew->key == NULL)
	{
		free(ptrNew);
		return (0);
	}
	ptrNew->value = copiedValue;
	ptrNew->next = ht->array[idx];
	ht->array[idx] = ptrNew;

	return (1);
}
