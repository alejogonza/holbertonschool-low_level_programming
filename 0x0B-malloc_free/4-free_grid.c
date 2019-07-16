#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - entry point
 * Description: free mem of 2D array
 * @grid: 2D array
 * @height: 2D array
 *
 */
void free_grid(int **grid, int height)
{
	int a;

	if ((grid == NULL) || (height == 0))
		return;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
