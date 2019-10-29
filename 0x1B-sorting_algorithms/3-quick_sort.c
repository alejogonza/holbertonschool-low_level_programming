#include "sort.h"
/**
 * quick_sort_rec - sorts an arr of int in ascending order selection sort algorithm recursion
 * @array: * to array
 * @size: size of the array
 * @array_init: init * to array
 * @size_init: init size of the array
 **/
void quick_sort_rec(int *array_init, size_t size_init, int *array, size_t size)
{
	size_t a, ax;
	int ax2;
	int b = -1, c, pvt = array[size - 1];

	if (array && size > 1)
	{
		for (a = 0; a < size - 1; a++)
		{
			if (array[a] < pvt)
			{
				b++;
				ax = b;
				if (ax != a && array[a] != array[ax])
				{
					c = array[a];
					array[a] = array[b];
					array[b] = c;
					print_array(array_init, size_init);
				}
			}


		}
		ax2 = size;
		if (ax2 - 1 != b + 1 && array[ax2 - 1] != array[b + 1])
		{
			array[size - 1] = array[b + 1];
			array[b + 1] = pvt;
			print_array(array_init, size_init);
		}
		if (b > 0)
		{
			quick_sort_rec(array_init, size_init, array, b + 1);
		}
		quick_sort_rec(array_init, size_init, array + b + 2,  size - (b + 2));
	}
}
/**
 * quick_sort - sorts an array of int in ascending order selection sort algorithm
 * @array: * to array
 * @size: size of the array
**/
void quick_sort(int *array, size_t size)
{
	int *arr_init;
	size_t size_init;

	if (array)
	{
		arr_init = array;
		size_init = size;
		quick_sort_rec(arr_init, size_init, array, size);
	}
}
