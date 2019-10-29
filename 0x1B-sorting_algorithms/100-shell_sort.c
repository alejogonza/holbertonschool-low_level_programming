#include "sort.h"
/**
 * shell_sort - Knuth sequence
 * @array: * to array
 * @size: size of the array
 **/
void shell_sort(int *array, size_t size)
{
	size_t kunth[1000], a = 0, b = 0, c;
	int d, e;

	if (!array)
		return;
	while (b * 3 + 1 < size)
	{
		kunth[a] = b * 3 + 1;
		b = kunth[a++];
	}
	for (c = 0; c < a; c++)
	{
		for (b = 0; b < size; b++)
		{
			if ((b + kunth[a - c - 1]) > size - 1)
				break;
			e = b;
			while (array[e] > array[e + kunth[a - c - 1]])
			{
				d = array[e];
				array[e] =  array[e + kunth[a - c - 1]];
				array[e + kunth[a - c - 1]] = d;
				e = e - kunth[a - c - 1];
				if (e < 0)
					break;
			}
		}
		print_array(array, size);
	}
}
