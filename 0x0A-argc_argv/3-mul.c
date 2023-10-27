#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Error is -1, 0 if success
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int x;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(*(argv + 1));
	j = atoi(*(argv + 2));

	x = i * j;
	printf("%d\n", x);
	return (0);
}
