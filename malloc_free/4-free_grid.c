#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function that frees a 2d grid previously
 * created by your alloc_grid function
 * @grid: width
 * @height: height
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL)
{
	int i = 0;

	for (; i <= height; i++)
		free(grid[i]);
	free(grid);
}
}
