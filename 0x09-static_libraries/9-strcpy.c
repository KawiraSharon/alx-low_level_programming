#include "main.h"


/**
 * char *_strcpy - program demonstrating func to cpy src
 * @dest: paste doen here
 * @src: copy strcpy
 * Return: string parameter explained
 */

char *_strcpy(char *dest, char *src)

{

int l = 0;
int x = 0;

while (*(src + l) != '\0')
{
l++;

}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);

}

