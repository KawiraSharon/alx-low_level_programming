#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on format specified
 * @format: list of types of arguments passed to function
 *
 * Return: void data type so nothing is returned
 */
void print_all(const char * const format, ...)
{
	va_list outputAll;
	unsigned int x = 0;
	char *str;
	const char *separator = "";
	const char t_arg[] = "cifs";

	va_start(outputAll, format);
	while (format && format[x])
	{
		unsigned int y = 0;

		while (t_arg[y])
		{
			if (format[x] == t_arg[y])
			{
				printf("%s", separator);
				if (format[x] == 'c')
					printf("%c", va_arg(outputAll, int));
				else if (format[x] == 'i')
					printf("%d", va_arg(outputAll, int));
				else if (format[x] == 'f')
					printf("%f", va_arg(outputAll, double));
				else if (format[x] == 's')
				{
					str = va_arg(outputAll, char *);
					if (!str)
						printf("(nil)");
					else
						printf("%s", str);
				}
				separator = ", ";
				break;
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(outputAll);
}
