#include "main.h"

/**
 * _strpbrk - Entry point of program
 *
 * @s: first parameter of input
 * @accept: parameter of input
 *
 * Return: 0 on code Success
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}

