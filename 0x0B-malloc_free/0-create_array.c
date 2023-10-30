#include "main.h"
#include <stdlib.h>

/**
 * create_array - function name
 * @size - denotes size of elements in array
 * @c - denotes the value of the elements array will consist
 * 
 * Return - the pointer
 */
char *create_array(unsigned int size, char c)
{
    char *ptArray;
    unsigned int count;

    ptArray = malloc(size * sizeof(char));

    for(count = 0; count < size; count++)
    {
        ptArray[count] = c;
    }

    return ptArray;
}
