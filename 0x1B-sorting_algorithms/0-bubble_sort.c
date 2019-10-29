#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: * to array
 * @size: size array
 **/
void bubble_sort(int *array, size_t size)
{
	size_t counter, nvar, szer;

	for (counter = 0; counter < size; counter++)
	{
		for (nvar = 1; nvar < size - counter; nvar++)
		{
			if (array[nvar - 1] > array[nvar])
			{
				szer = array[nvar];
				array[nvar] = array[nvar - 1];
				array[nvar - 1] = szer;
				print_array(array, size);
			}
		}
	}
}
