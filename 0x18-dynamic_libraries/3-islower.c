#include "main.h"

/**
 * _islower - Program writes a function that checks for lowercase alphabets
 * @c: return 1 if c is lowercase
 * Return: Code returns 1 for a success value
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);

}
