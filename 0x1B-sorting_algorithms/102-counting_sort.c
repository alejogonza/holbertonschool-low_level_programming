#include "sort.h"
/**
 * counting_sort - sorts an array of integers Counting
 * @array: * to array
 * @size: size of the array
 **/
void counting_sort(int *array, size_t size)
{
	int a, b, *c_arr, *ax;
	size_t c;

	if (!array || size < 2)
		return;
	a = array[0];
	for (c = 0; c < size; c++)
	{
		if (array[c] > a)
			a = array[c];
	}
	c_arr = calloc((a + 1), sizeof(int));
	for (c = 0; c < size; c++)
	{
		c_arr[array[c]]++;
	}
	for (b = 1; b < a; b++)
	{
		c_arr[b + 1] += c_arr[b];
	}
	print_array(c_arr, a + 1);
	ax = malloc(sizeof(int) * size);
	for (c = 0; c < size; c++)
	{
		c_arr[array[c]]--;
		ax[c_arr[array[c]]] = array[c];
	}
	for (c = 0; c < size; c++)
	{
		array[c] = ax[c];
	}
	free(ax);
	free(c_arr);
}
