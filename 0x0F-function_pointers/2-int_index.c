#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that'll search for int
 * @array: points to array of integers
 * @size: no of elements array holds
 * @cmp: pointer to func that return int and argument int
 * Return: index of first element cmp func return 0,
 * -1 for no match or negative size
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
