#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: string to search
 * @c: character in string to search
 *
 * Return: pointer to the first occurence of character
 */
char *_strchr(char *s, char c)
{
	if (!s)
	{
		return (NULL);
	}

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	return (NULL);
}
