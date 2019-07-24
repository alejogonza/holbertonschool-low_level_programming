#include "function_pointers.h"

/**
 * array_iterator - entry point
 * Description: function given as a parameter on each element of an array
 * @array:  array
 * @size: Size of array
 * @action: Function
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if ((size != NULL) && (action != NULL))
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
