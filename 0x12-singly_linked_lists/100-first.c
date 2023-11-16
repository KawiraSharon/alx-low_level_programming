#include "lists.h"

/**
 * bmain - a c function executed before the main function is executed
 * Return: none because void data type is returned
 */
void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
