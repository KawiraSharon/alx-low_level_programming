#include "main.h"

/**
 * _strlen - project to return string's length
 * @s: char of string
 * Return: string's length
 */

int _strlen(char *s)

{

int longi = 0;

while (*s != '\0')
{
longi++;
s++;
}
return (longi);

}

