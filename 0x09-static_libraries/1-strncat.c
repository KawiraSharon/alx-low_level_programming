#include "main.h"

/**
 * _strncat - task 1 to concatenate two strings as well
 * @dest: parameter 1 input value
 * @src: parameter 2 defined input value
 * @n: parameter 3 input value
 * Return: return resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);

}

