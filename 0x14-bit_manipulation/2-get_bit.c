#include "holberton.h"
/**
 * get_bit - entry point
 * Description: val of a bit at a given index.
 * @n: input.
 * @index: index bit.
 * Return: val of bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index < 64)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
