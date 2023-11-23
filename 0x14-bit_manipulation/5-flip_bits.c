#include "main.h"

/**
 * flip_bits - returns no of bits needed for flipping to get to nxt no
 * @n: no being flipped
 * @m: no being flipped to
 *
 * Return: number of bits needed to flip to get one to next
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive_or = n ^ m, total_bits = 0;

	while (exclusive_or > 0)
	{
		total_bits += (exclusive_or & 1);
		exclusive_or >>= 1;
	}

	return (total_bits);
}
