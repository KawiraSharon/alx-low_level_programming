#include "main.h"

/**
 * clear_bit - function that sets bit value to index given
 * @n: pointer toward the bit
 * @index: index being set at 0 ad given index
 *
 * Return: 1 on success of code execution and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
