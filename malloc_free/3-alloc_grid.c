#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Pointer to 2d arrays
 */
int **alloc_grid(int width, int height)
{
	int i, a;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
{
	grid[i] = (int *)malloc(sizeof(int) * width);
	if (grid[i] == NULL)
{
	for (a = 0; a < i; a++)
		free(grid[a]);
	return (NULL);
}
	for (a = 0; a < width; a++)
{
	grid[i][a] = 0;
}
}
return (grid);
}
