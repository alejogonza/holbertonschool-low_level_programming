#include "holberton.h"
/**
 * reverse_array - entry point
 * Description: reverse array and int
 * @a: array to reversed
 * @n: array elements
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int arve;
	int var1;

	for (i = 0; i < n / 2; i++)
	{
		arve = a[i];
		var1 = n - i - 1;
		a[i] = a[var1];
		a[var1] = arve;
	}
}
