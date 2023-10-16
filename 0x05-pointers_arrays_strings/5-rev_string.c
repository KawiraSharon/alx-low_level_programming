#include "main.h"

/**
 * rev_string - prograM to reverse string
 * @s: string intended for input
 * Return: reverse string's output
 */

void rev_string(char *s)

{
char rev = s[0];
int counter = 0;
int i;

while (s[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
{
counter--;
rev = s[i];
s[i] = s[counter];
s[counter] = rev;
}

}

