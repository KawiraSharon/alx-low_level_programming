#include <stdio.h>
/**
 * main - Program to print data types and their sizes
 * Return: 0 to indicate success, final line of code
 */
int main(void)

{
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of double: %lu byte(s)\n", sizeof(double));
printf("Size of long: %lu byte(s)\n", sizeof(long));
printf("Size of float: %lu byte(s)\n", sizeof(float));
printf("Size of long long: %lu byte(s)\n", sizeof(long long));
return (0);

}

