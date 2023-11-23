#include "main.h"

/**
 * get_bit - return value of bit at given index
 * @n: bit to be returned
 * @index: index for which to obtain value
 *
 * Return: value at index or error if -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) *8))
		return (-1);

	if((n & (1 << index)) == 0)
		return (0);

	return (1);
}
