#include "holberton.h"
/**
 * flip_bits - entry point
 * Description:returns number of bits needed to flip
 *@n: unsig lint
 *@m: unsig lint
 *Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bneed = 0;
	int i = 0;
	int sz = ((sizeof(n) * 8) - 1);

	for (; i <= sz; i++)
	{
		if (((n ^ m) >> i)  & 1)
			bneed++;
	}

	return (bneed);
}
