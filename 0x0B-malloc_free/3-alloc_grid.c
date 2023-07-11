#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **td;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	td = malloc(sizeof(int *) * height);

	if (td == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		td[x] = malloc(sizeof(int) * width);

		if (td[x] == NULL)
		{
			for (; x >= 0; x--)
				free(td[x]);

			free(td);

			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			td[x][y] = 0;
	}

	return (td);
}
