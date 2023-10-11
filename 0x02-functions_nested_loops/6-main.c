#include "main.h"
#include <stdio.h>

/**
 * main - function to compute calue of an absolute integer
 *
 * Return: Always 0 to show code success
 */
int main(void)
{
int r;

r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);

}
