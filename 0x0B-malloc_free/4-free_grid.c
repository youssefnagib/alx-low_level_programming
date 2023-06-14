#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free me
 * @grid: int
 * @height: int
 * Return: int
 */
void free_grid(int **grid, int height)
{
	int o;

	for (o = 0; o < height; o++)
	{
		free(grid[o]);
	}
	free(grid);
}
