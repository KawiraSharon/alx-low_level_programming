#include "main.h"

/**
 * puts_half - half string is printed in this function
 * if odd len, n = string length is 1/2
 * @str: string to be input
 * Return: half string
 */

void puts_half(char *str)

{

int a, n, longi;

longi = 0;

for (a = 0; str[a] != '\0'; a++)

longi++;

n = (longi / 2);
if ((longi % 2) == 1)
n = ((longi + 1) / 2);
for (a = n; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');

}

