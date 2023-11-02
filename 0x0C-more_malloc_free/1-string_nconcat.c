#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - name of function that concatenates two given strings.
 * @s1: denotes string 1
 * @s2: denotes string 2
 * @n: parameter for characters of string 2 or index
 *
 * Return: pointer in character data type
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptChar;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	ptChar = malloc((size1 + n + 1) * sizeof(char));

	if (ptChar == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		ptChar[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		ptChar[i] = s2[i - size1];
	}
	ptChar[i] = '\0';

	return (ptChar);
}
