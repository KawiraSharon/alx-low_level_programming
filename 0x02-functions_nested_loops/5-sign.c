#include "main.h"

/**
 * print_sign - Program ro print number signs
 * @n: Numbers to be checked
 * Return: return 1 for a positive number and -1 for every negative number
 */

int print_sign(int n)

{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
