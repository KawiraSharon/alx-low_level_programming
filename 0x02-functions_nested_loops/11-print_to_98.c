#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Program to print numbers n through to 98
 * @n: The program allocated value for which to begin printing
 * Return: Always rutrun 0 for code success
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}

}
