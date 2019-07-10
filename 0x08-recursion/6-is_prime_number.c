#include "holberton.h"
/**
 * is_prime_number - entry point
 * Description: check if input integer is a prime number
 * @n: int
 * Return: 1 = prime 0 = not
 */
int is_prime_number(int n)
{
	return (primechecker(n, 2));
}

/**
 * primechecker - entry point
 * Description: the checker part
 * @j: int
 * @k: int
 * Return: 0 - 1
*/
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
