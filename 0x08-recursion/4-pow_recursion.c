#include "main.h"

/**
 * _pow_recursion - function to return value of x to power y
 *
 * @x: number to be raised by power y
 * @y: power parameter
 *
 * Return: -1 if y < 0 and 1 if y == 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
