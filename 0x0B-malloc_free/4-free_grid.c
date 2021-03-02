#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees matrix initially created
 * @grid: first array of pointers to pointers
 * @height: number of strings in the matrix
 * Return: void
 */
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
