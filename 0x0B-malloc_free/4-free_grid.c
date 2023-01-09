#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_grid -  frees a 2 dimensional grids.
 *@grid : array
 *@height : int
 *Return: 0
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
