#include "main.h"

/**
 * print_line - prints straight line in terminal
 * @n: character is printed these no of times
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;

for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}

}

