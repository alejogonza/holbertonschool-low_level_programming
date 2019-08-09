#include "holberton.h"

/**
 * clear_bit - entry point
 * Description: sets the value of a bit to 0 at a given index.
 * @n: *
 * @index: index of the bit.
 * Return: 1 or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	if (*n & (1 << index))
		*n = *n ^ 1 << index;

	return (1);
}
