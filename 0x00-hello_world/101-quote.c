#include <unistd.h>
/**
 * main - Printing exactly given line with new line to the standard error
 * Return: 1 as an indication of code success
 */
int main(void)

{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n, 59");
return (1);
}
