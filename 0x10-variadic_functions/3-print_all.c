#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything with respect to specified format
 * @format: list type of arg function accepts.
 *
 * Return: Nothing because of void data type
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
				switch (format[x])
				{
					case 'c':
						printf("%c", va_arg(outputAll, int));
						break;
					case 'i':
						printf("%d", va_arg(outputAll, int));
						break;
					case 'f':
						printf("%f", va_arg(outputAll, double));
						break;
					case 's':
						str = va_arg(outputAll, char *);
						if (!str)
						{
							printf("(nil)");
							break;
						}
						printf("%s", str);
						break;
					default:
						y++;
						continue;
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
