#include "holberton.h"

/**
 * _sqrt_recursion - entry point
 * Description: returns natural square root of a number
 * @n: int
 * @i: int
 * @j: int
 * Return: n square root -1 if no square root
*/
int _sqrt_recursion(int n)
{
	return (sqrt_nl_root(n, 1));
}

int sqrt_nl_root(int i, int j)
{
	int square = j * j;

	if (square > i)
		return (-1);
	if (square == i)
		return (j);
	else
		return (sqrt_nl_root(i, j + 1));

}
