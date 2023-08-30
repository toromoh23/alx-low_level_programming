#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2dimensional array
 * @grid: 2dimensional grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
