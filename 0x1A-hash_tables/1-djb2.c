#include "hash_tables.h"


/**
 * hash_djb2 - djb2 algorithm
 *
 * @str: string generator
 *
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	uint64_t hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
