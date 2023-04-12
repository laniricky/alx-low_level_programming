#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free a 2d grid
 * @grid: 2d grid
 * @height: heightof the grid
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
