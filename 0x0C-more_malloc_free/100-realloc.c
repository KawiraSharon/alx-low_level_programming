#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates old memory block to new malloc and free old malloc
 * @ptr: pointer that is the first argument in function
 * @old_size: total bytes size for old pointer
 * @new_size: total bytes size for new pointer
 *
 * Return: pointer on success and null if failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (ptr != NULL)
	{
		clone = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (0);
	}
	relloc = malloc(new_size);

	if (relloc == NULL)
	{
		return (0);
	}
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = clone[i];
	}
	free(ptr);

	return (relloc);
}
