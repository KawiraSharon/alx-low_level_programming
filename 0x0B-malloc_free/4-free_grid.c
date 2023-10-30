#include "main.h"
#include <stdlib.h>

/**
 * free_grid - creates grid then clears that space
 * @grid: denotes grid width
 * @height: denotes grid height
 * Return: free for deletion of memory allocation
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
