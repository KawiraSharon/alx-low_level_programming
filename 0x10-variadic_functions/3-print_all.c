#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print everything entered by user
 * @format: list char, float, int, string as specified for user to enter
 * Return: void return data type so nothing is returned
 */
void print_all(const char * const format, ...)
{
	va_list outputAll;
	unsigned int x = 0, y, z = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(outputAll, format);
	while (format && format[x])
	{
		y = 0;
		while (t_arg[y])
		{
			if (format[x] == t_arg[y] && z)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(outputAll, int)), z = 1;
			break;
		case 'i':
			printf("%d", va_arg(outputAll, int)), z = 1;
			break;
		case 'f':
			printf("%f", va_arg(outputAll, double)), z = 1;
			break;
		case 's':
			str = va_arg(outputAll, char *), z = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} x++;
	}
	printf("\n"), va_end(outputAll);
}
