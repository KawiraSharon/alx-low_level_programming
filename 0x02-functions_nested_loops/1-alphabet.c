#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase then new line
 *
 * Return: Always (0) to show success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar ('\n');
}
