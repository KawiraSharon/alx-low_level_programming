#include "hash_tables.h"


/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 *
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	uint64_t hash = 5381;
	char character;


	while ((character = *str++))
		hash = ((hash << 5) + hash) + character; /* hash * 33 + character */

	return (hash);
}
