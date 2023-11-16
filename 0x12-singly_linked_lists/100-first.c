#include "lists.h"

/**
 * precede_main - a c function executed before the main function is executed
 * Return: none because void data type is returned
 */
void __attribute__((constructor)) precede_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
