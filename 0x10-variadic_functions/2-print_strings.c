#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print string followed by \n.
 * @separator: string to print btwn strngs
 * @n: no of arguments in strings user enters
 * @... user elements user enters
 * Author: KawiraSharon
 * Return: nth as return data type of func is void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringNew;
	unsigned int x;
	char *strng;

	va_start(stringNew, n);

	for (x = 0; x < n; x++)
	{
		strng = va_arg(stringNew, char *);

		if (strng != NULL)
			printf("%s", strng);

		else
			printf("nil");

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(stringNew);
}
