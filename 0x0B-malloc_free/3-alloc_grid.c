#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - allocates 2d array
 * @width: the width of the array
 * @height: height of the array
 * Return: returns pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **newgrid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	newgrid = malloc(sizeof(int) * height);

	if (newgrid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		newgrid[i] = malloc(sizeof(int) * width);

		if (newgrid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(newgrid[i]);
			}
			free(newgrid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			newgrid[i][j] = 0;
		}
	}

	return (newgrid);
}
