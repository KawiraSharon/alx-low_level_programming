#include <stdio.h>

/**
 * main - Program to print alphabets in lowercase
 * Return: 0 as an indication of code success
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z' ; i++)
	if (i != 'q' && i != 'e')
		putchar(i);
putchar('\n');
return (0);

}
