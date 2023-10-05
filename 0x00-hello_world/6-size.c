#include <stdio.h>
/**
 * main - Program to print data types and their sizes
 * Return: 0 to indicate success, final line of code
 */
int main(void)

{
int z;
char y;
double p;
long w;
float m;
long long int e;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of double: %lu byte(s)\n", (unsigned long)sizeof(p));
	printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);

}

