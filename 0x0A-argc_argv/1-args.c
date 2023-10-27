#include <stdio.h>

/**
 * main - program to print number of arguments passed into it.
 *
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
