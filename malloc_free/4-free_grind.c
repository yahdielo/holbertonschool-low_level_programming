#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function for two dimensional grind
 * @grid:the address to gid
 * @height: height
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
