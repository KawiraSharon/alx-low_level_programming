#include "main.h"

/**
 * _abs - Program to get value of integer
 * @c: The value of number allocated
 * Return: Value 0 for successful code
 */

int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
