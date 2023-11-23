#include "main.h"

/**
 * get_endianness - function checks for endianness
 *
 * Return: 0 if endian is big, 1 if endian is little
 */
int get_endianness(void)
{
	int no_j = 1;
	char *ptrEndiann = (char *)&no_j;

	if (*ptrEndiann == 1)
		return (1);

	return (0);
}
