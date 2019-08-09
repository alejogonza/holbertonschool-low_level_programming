#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - entry point
 * Description: converts a binary number to an unsigned int
 * @b: num convert
 * Return: 0 if is not a number
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int var = 0, op = 0, res = 0;

	unsigned int mul = 1;

	if (b == NULL)
	{

		return (res);
	}

	for (op = 0; b[op]; op++)
	{

		if (!((b[op] == '0') || (b[op] == '1')))
			return (res);
	}
	for (var = 0; var < op; var++, mul *= 2)
		res = res + mul * (b[op - 1 - var] - '0');

	return (res);

}
