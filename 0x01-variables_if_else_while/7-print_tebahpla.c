#include <stdio.h>

/**
 * main - The Putchar function and code in main
 *
 * Return: Always 0 to indicate project success
 */

int main(void)
{
char i;

for (i = 'z' ; i >= 'a' ; i--)
	putchar(i);
putchar('\n');
return (0);

}
