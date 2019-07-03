#include "holberton.h"
#include <stdio.h>

/**
 * print_array - entry point
 * Description: prints elements of integers.
 * @a: array.
 * @n: elements
 * Return: 0
 */
void print_array(int *a, int n)
{

	int var1;
	int ei;
	int sa;

	sa = 0;

	for (ei = 0; ei < n; ei++)
	{

		printf("%d", *(a + ei));
		sa++;
		var1 = n - 1;
		if (ei != var1)
			printf(", ");
	}
	printf("\n");
}
