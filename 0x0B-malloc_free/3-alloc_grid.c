#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - ...
  * @width: ...
  * @height: ...
  *
  * Return: ...
  */

int **alloc_grid(int width, int height)
{
	int i, j, y, u;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (u = 0; u < width; u++)
		{
			a[y][u] = 0;
		}
	}

	return (a);
}
