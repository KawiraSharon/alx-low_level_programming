#include <stdio.h>

/**
 * main - prints file name from which it was compiled
 *
 * Author - KawiraSharon
 * Return: 0 on compilation success
 */
int main (void)
{
	printf("%s\n", __FILE__);
	return (0);
}
