#include "main.h"

/**
 * _puts - function to print string, new line, to stdout
 * @str: string to be output
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
