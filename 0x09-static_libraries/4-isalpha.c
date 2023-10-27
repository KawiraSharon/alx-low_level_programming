#include "main.h"

/**
 * _isalpha - Function to check for alphabetic character
 * @c: The letter is determined as lowercase, or uppercase
 * Return: 1 to show code success
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
