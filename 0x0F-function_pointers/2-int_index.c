#include "function_pointers.h"

/**
 * int_index - entry point
 * Description: searches for an integer.
 * @array: Array of integer
 * @size: Array size.
 * @cmp: Pointer to compare.
 * Return: num success, -1 fail.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array != NULL) && (cmp != NULL))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
