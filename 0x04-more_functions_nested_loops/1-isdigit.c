#include "main.h"

/**
 * _isdigit - program to check if parameter defined is digit
 * @c: The parameter to determine output
 * Return: if char is digit return 1, else return 0
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
