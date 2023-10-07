#include <stdio.h>

/**
 * main - Program to use putchar function
 *
 * Return: Always indicate 0 to show code success
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);

}
