#include "main.h"

/**
 * _strstr - Entry point of the main program
 *
 * @haystack: input of parameter 1
 * @needle: input of parameter 2
 *
 * Return: 0 on code Success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

