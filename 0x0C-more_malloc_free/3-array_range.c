#include "holberton.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers from min to max, inclusive of both
* @min: Lowest number to include.
* @max: Highest number to include.
* Return: Pointer to array, NULL upon failure or error.
*/

int *array_range(int min, int max)
{
	int rge;
	int inc;
	int *ary;

	if (min > max)
		return (NULL);
	rge = max - min + 1;
	ary = (int *)malloc(rge * sizeof(int));
	if (ary == NULL)
	{
		free(ary);
		return (NULL);
	}
	for (inc = 0; inc < rge; inc++)
		ary[inc] = min + inc;
	return (ary);
}
