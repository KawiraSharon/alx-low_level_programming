#include "main.h"

/**
 * binary_to_uint - function that converts binary to unsigned int
 * @b: character pointer to string with binary number value
 *
 * Return: unsigned int on success, 0 if b is null or not exclusively 0s || 1s
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int place_val = 1;
	int arr_len;

	if (b == NULL)
		return (0);

	for (arr_len = 0; b[arr_len];)
		arr_len++;

	for (arr_len -= 1; arr_len >= 0; arr_len--)
	{
		if (b[arr_len] != '0' && b[arr_len] != '1')
			return (0);

		i += (b[arr_len] - '0') * place_val;
		place_val *= 2;
	}
	return (i);
}
