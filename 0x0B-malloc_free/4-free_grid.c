#include "main.h"
/**
 *  free_grid - that frees a 2 dimensional
 * @grid: pointer to grid
 * @height: height of the grid
*/
void free_grid(int **grid, int height)
{
	int y;

for (y = 0; y < height; y++)
{
	free(grid[y]);
}
	free(grid);
}
