#include "main.h"

/**
 * _strlen_recursion - finds length of a string
 *
 * @s: string whose length is being obtained
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
	}
	return (1 + _strlen_recursion(s));
}
