#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - natural number square root is returned
 * @n: number whose square root is being calculated
 *
 * Return: square root we get
 */

int _sqrt_recursion(int n)

{


if (n < 0)

return (-1);

return (actual_sqrt_recursion(n, 0));

}


/**
 * actual_sqrt_recursion - recursion occurs for natural to be found
 * square root of a number - found here
 * @n: number whose sqrt is being calculated
 * @i: iterator
 *
 * Return: sq root obtained
 */

int actual_sqrt_recursion(int n, int i)

{

if (i * i > n)

return (-1);

if (i * i == n)

return (i);

return (actual_sqrt_recursion(n, i + 1));

}
