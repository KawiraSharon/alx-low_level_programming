#include <stdio.h>

/**
 * main - main utilizes putchar function
 * Return: Always 0 for code success indication
 */

int main(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
{
	putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);

}
