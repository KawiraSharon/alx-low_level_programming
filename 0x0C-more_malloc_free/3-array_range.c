#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates array of integers.
 * @min: minimum value of array
 * @max: maximum value of array
 *
 * Return: either NULL if not successful, pointer if successful
 */
int *array_range(int min, int max)
{
	int *arrofInt;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arrofInt = malloc(sizeof(int) * size);

	if (arrofInt == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		arrofInt[j] = min + j;
	}

	return (arrofInt);
}
