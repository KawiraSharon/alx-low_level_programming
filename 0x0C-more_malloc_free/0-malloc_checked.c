#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function named to dynamically allocate memory
 * @b: non negative integer value to hold the size of memory
 * Author - KawiraSharon
 *
 * Return: pointer on execution success
 */
void *malloc_checked(unsigned int b)
{
	void *ptrAlloc;

	ptrAlloc = malloc(b);
	if (ptrAlloc == NULL)
		exit(98);

	return (ptrAlloc);
}
