#include "main.h"

/**
 * string_toupper - program that change all lowercase in of string to uppercase
 * @n: pointer declaration
 * Return: value n
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);

}

