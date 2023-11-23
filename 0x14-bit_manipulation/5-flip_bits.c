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
	unsigned long int x_or = n ^ m, total_bits = 0;

	while (x_or > 0)
	{
		total_bits += (x_or & 1);
		x_or >>= 1;
	}

	return (total_bits);
}
