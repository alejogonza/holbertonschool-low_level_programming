#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of int
 * @array: The array to be printed
 * @size: num of elems in @array
 */
void print_array(const int *array, size_t size)
{
	size_t count;

	count = 0;
	while (array && count < size)
	{
		if (count > 0)
			printf(", ");
		printf("%d", array[count]);
		++count;
	}
	printf("\n");
}
