#include "main.h"

/**
 * factorial -returns factorial of a given number
 *
 * @n: number
 * Return: -1 for n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
