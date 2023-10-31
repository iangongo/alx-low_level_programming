#include "main.h"
#include <stdlib.h>

/**
* free_grid - function name frees a 2 dimensional grid
* @grid: fuunction parameter one the grid
* @height: function parameter two height of the grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);
}
