#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers then \n
 * @separator: mandatory argument; string being printed btwn no.s
 * @n: mandatory argument; total count of int passed to func
 * @... optional arguments user enters
 * Author: KawiraSharon
 * Return: void as denoted in function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printer;
	unsigned int i;

	va_start(printer, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printer, int));

		if (separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(printer);
}
