#include <stdlib.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: memory area
 * @b: constant byte to copy
 * @n: first bytes of memory
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (!s)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
