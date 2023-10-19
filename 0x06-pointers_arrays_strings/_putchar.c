#include <unistd.h>

/**
 * _putchar - this one writes the characters to standard output
 * @c: character we are printing
 *
 * Return: 1 on code success
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

