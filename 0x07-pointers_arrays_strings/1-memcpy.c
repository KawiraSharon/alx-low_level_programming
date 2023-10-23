#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (!dest && !src)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
