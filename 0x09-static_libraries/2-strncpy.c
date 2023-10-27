#include "main.h"

/**
 * _strncpy - function to copy string
 * @dest: parameter 1 input value
 * @src: parameter 2 input value
 * @n: parameter 3 input value
 * Return: effective dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;

j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}

return (dest);

}

