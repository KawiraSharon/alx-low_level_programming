#include <stdio.h>

/**
 * main - Program lists natural numbers that are below 10, multiples of 3 and 5
 * Return: Always return 0 to indicate code success
 */

int main(void)
{
int i, z = 0;

while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
z += i;
}
i++;
}
printf("%d\n", z);
return (0);

}

