#include "sort.h"
/**
 * selection_sort - sorts an array of ints in ascending order selection sort
 * @array: * to array
 * @size: size of array
 **/
void selection_sort(int *array, size_t size)
{
	size_t a, b, c, j;
	int ax, fg;

	if (array)
	{
		for (a = 0; a < size; a++)
		{
			ax = array[a];
			fg = 0;
			for (b = a; b < size ; b++)
			{
				if (array[b] < ax)
				{
					j = b;
					ax = array[b];
					fg = 1;
				}
			}
			if (fg == 1)
			{
				c = array[a];
				array[a] = array[j];
				array[j] = c;
				print_array(array, size);
			}
		}
	}
}
