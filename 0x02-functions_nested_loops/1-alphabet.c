#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase then new line
 *
 * Return: Always (0) to show success
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar ('\n');
}
