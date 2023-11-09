#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that return sum of all arguments
 * @n: total arguments user passes to function
 * @... variable arguments user passes to function
 * Author: KawiraSharon
 * Return: 0 if n==0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j, result = 0;
	va_list summation;
	/* start takes arguments: name of list, n last element before list */
	va_start(summation, n);
	/* access elements using va_arg by help of loop*/
	for (j = 0; j < n; j++)
		result = result + va_arg(summation, int);
	/*va_end with list name */
	va_end(summation);

	/*return result of sum*/
	return (result);
}
