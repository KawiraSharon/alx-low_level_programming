#include "main.h"
#include <stdlib.h>

/**
 *_strlen - denotes count of array
 *@s: denotes array
 *Return: 1 on code success
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 *_strcpy - arrays copied here
 *@src: denotes array
 *@dest: destination of  array
 *Return: destination, commonly dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 *_strdup - array to print string
 *@str: array
 *Return: pointer, malloc
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	_strcpy(dst, str);
	return (dst);
}
