#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function name, allocates memory for array using malloc.
 * @nmemb: total array elements
 * @size: size of data type as array element
 *
 * Return: NULL if unsuccessful, or pointer if successful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Set allocated memory to zero */
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
