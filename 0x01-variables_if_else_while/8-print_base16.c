#include <stdio.h>

/**
 * main -The main encapsulates the putchar function
 * Return: Always return 0 to show code success
 */

int main(void)
{
int i;
char j;

for (i = 0; i < 10 ; i++)
	putchar(i + '0');
for (j = 'a' ; j <= 'f' ; j++)
	putchar(j);
putchar('\n');
return (0);

}
