#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimentional array of integers
 * @width: width of the 2 dimentional array
 * @height: height of the 2 dimentional array
 *
 * Return: NULL if width <= 0, height <= 0, or if function faiols
 * otherwise return a pointer to the 2 dimentional array of intergers
 */

int **alloc_grid(int width, int height)
{
	int **alloc_grid;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc_grid = malloc(sizeof(int *) * height);

	if (alloc_grid == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		alloc_grid[hgt_index] = malloc(sizeof(int) * width);

		if (alloc_grid[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index++)
				free(alloc_grid[hgt_index]);

			free(alloc_grid);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid-index < width; wid_index++)
			alloc_grid[hgt_index][wid_index] = 0;
	}

	return (alloc_grid);
}
