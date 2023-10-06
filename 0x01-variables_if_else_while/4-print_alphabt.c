#include <stdio.h>

/**
 * main - Program to print alphabets in lowercase
 * Return: 0 as an indication of code success
 */
int main(void)
{
char a;
for (a = 'b' ; <= 'z' ; a++)
	if (a != 'q' && a != 'e')
		putchar(a);
putchar('\n');
return (0);

}
