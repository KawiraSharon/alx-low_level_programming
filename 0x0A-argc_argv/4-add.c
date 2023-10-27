#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program to add positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for no no. passed, Error if argument contains symbols
 */
int main(int argc, char *argv[])
{
	int i, j, sum;
	char *pointer;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		pointer = argv[i];
		j = atoi(pointer);

		if (!isdigit(pointer[0]))
		{
			printf("Error\n");
			return (1);
		}
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}

