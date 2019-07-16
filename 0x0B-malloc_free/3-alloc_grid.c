#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - entry point
 * Description: returns a pointer to a 2D array of integers
 * @width: width-2D
 * @height: height-2D
 * Return: Pointer-2D array of int
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int a;
	int b;

	if ((width < 1) || (height < 1))
		return (NULL);

	ptr = (int **)malloc((height) * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(ptr[a]);
			free(ptr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;

	return (ptr);
}
