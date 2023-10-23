#include "main.h"
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
	int i;

	if (!s)
	{
		return (NULL);
	}

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		s++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
