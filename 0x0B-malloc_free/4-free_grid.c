#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - point
 *
 * @grid: rows
 *
 * @height: columns
 *
 * Return: pointer to 2  or null
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
