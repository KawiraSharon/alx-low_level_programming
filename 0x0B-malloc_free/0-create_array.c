#include "main.h"
#include <stdlib.h>

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
