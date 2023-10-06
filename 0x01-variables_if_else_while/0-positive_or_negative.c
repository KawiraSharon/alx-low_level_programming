#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Program to show output for different integers
 * Return: 0 to indicate success of code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%d, is positive", n);
	else if (n == 0)
	printf("%d is zero", n);
	else
	printf("%d is negative", n);
	return (0);

}

