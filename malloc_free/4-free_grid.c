#include "main.h"
#include <stdlib.h>
/**
* free_grid - Entry point
* Description:frees a 2 dimensional grid.
* @grid :integer
* @height :integer
* Return: pointer
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
