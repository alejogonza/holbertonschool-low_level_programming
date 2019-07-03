#include "holberton.h"
/**
 * swap_int - entry point
 * Description: swap two ints
 * @a: var1
 * @b: var2
 * Return: 0
 */

void swap_int(int *a, int *b)
{

	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
