#include "holberton.h"
/**
 * is_prime_number - check if input integer is a prime number
 * @n: integer
 * @j: integer
 * @k: integer
 * Return: 1 = prime 0 = not
 */
int is_prime_number(int n)
{
	return (primechecker(n, 2));
}

int primechecker(int j, int k)
{
	if (j == 1 || j < 0)
		return (0);
	if (j == k)
		return (1);
	if (j % k == 0)
		return (0);
	else
		return (primechecker(j, k + 1));
}
