#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generate, prints passwords for crackme5 executable
 * @argc: The number of arguments supplied to the program.
 * @argv: array of pointers to arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *code_x;
	int len = strlen(argv[1]), i, temp;

	code_x = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	password[0] = code_x[temp];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += argv[1][i];
	password[1] = code_x[(temp ^ 79) & 63];

	temp = 1;
	for (i = 0; i < len; i++)
		temp *= argv[1][i];
	password[2] = code_x[(temp ^ 85) & 63];

	temp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	password[3] = code_x[rand() & 63];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += (argv[1][i] * argv[1][i]);
	password[4] = code_x[(temp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	password[5] = code_x[(temp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
