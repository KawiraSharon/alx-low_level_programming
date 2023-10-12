#include "main.h"

/**
 * _puts - program to print string, new line
 * @str: parameter defined
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');

}

