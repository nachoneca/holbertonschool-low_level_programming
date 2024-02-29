#include"main.h"
/**
 *free_grid - frees all memory of array
 *@grid: pointer to my bidim array
 *@hight: y of my bidim array
 */
void free_grid(int **grid, int height)
{
	int b;
	for (b = 0; b < height; b++)
		free(grid[b]);
	free(grid);
}
