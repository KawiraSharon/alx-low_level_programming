#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int check_num(char *str);

/**
 * main -  a program that adds positive numbers
 *
 * @argc: number of arguments
 * @argv: arguments passed to the program
 * Return: 0
 */
int main(int argc, char **argv)
{
int i;
int sum;
int str_to_int;

i = 1;

while (i < argc)
{
if (check_num(argv[i]))
{
str_to_int = atoi(argv[i]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", sum);

return (0);
}
/**
 * check_num - checks if the arguments passed are digits
 *
 * @str:the string to check
 * Return: 0
 */
int check_num(char *str)
{
unsigned int i;

i = 0;

while (i < strlen(str))
{
if (!isdigit(str[i]))
{
return (0);
}
i++;
}
return (1);
}

