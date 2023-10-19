#include "main.h"

/**
 * reverse_array - integers' array reverse
 * @a: declares array as a
 * @n: denotes array elements
 * Return: return void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

