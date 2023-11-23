#include "main.h"

/**
 * set_bit - set bit value to 1 at given index
 * @n: points to bit being set
 * @index: position at which we are settine 1
 *
 * Return: 1 on code succes, -1 on err
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
