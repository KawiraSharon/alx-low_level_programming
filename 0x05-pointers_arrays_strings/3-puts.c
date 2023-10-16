#include "main.h"

/**
 * _puts - program to output string then new line, to stdout
 * @str: as defined
 */

void _puts(char *str)

{

while (*str != '\0')

{

_putchar(*str++);

}

_putchar('\n');

}
