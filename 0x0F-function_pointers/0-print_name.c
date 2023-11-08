#include "function_pointers.h"

/**
 * print_name - function name that executes printing of name
 * @name: points to a string that denotes name
 * @f: pointer to function with char argument and void data type to return
 * Return: void meaning we don't have to return anything
 */
void print_name(char *name, void (*f)(char *))
{
	/*check if either of the arguments in the function are not null*/
	/*if they are valid then return the name*/

	if (!name || !f)
		return;
	f(name);
}
