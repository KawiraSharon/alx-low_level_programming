#include "main.h"

/**
 * _strcat - program to concatenate two strings as defined
 * @dest: parameter 1 to be input
 * @src: parameter 2 to be input
 * Return: returns void to it
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);

}

