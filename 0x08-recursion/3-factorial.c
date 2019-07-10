#include "holberton.h"

/**
 * factorial - entry point
 * Description: returns factorial of a given number
 * @n: integer
 * Return: 0 or -1 to error
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
