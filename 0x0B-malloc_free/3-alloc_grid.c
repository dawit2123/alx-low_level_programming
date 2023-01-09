#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height:int
 *
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **pt;

	if (width <= 0 || height <= 0)
		return (NULL);
	pt = (int **)malloc(sizeof(int *) * height);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		pt[i] = (int *)malloc(sizeof(int) * width);
		if (pt[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(pt[j]);
			free(pt);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			pt[i][j] = 0;
		}
	}
	return (pt);
}
