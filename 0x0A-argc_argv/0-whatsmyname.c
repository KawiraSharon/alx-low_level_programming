#include <stdio.h>

/**
 * main - the main function
 *
 * @argc: argument count
 * @argv: array of argc
 * Return: 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
