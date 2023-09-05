#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to the 2D array or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int y, f;
	int **dulx;

	if (width < 1 || height < 1 || width + height < 2)
	{
		return (NULL);
	}
	dulx = malloc(height * sizeof(*dulx));

	if (dulx == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < width; y++)
	{
		dulx[y] = malloc(width * sizeof(**dulx));
		if (dulx[y] == NULL)
		{
			for (f = 0; f < y; f++)
			{
				free(dulx[f]);
			}
			free(dulx);
			return (NULL);
		}

		for (f = 0; f < height; f++)
		{
			dulx[y][f] = 0;
		}
	}
	return (dulx);
}
