#include "holberton.h"

/**
 * infinite_add - entry point
 * Description: function that adds two numbers.
 * @n1: number
 * @n2: number
 * @r: Buffer
 * @size_r: buffer size
 * Return: add numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1;
	int a2;
	int a3;
	int a4;
	int a5;
	int sum;
	int add;
	char *a, *b;

	for (a1 = 0; n1[a1] != '\0'; a1++)
		;

	for (a2 = 0; n2[a2] != '\0'; a2++)
		;

	(a1 > a2) ? (a = n1, b = n2) : (a = n2, b = n1);

	for (a3 = a1 - 1, a4 = a2 - 1, a5 = 0, add = 0; a3 >= 0 || add != 0; a3--, a4--, a5++)
	{
		sum = (a3 >= 0) ? ((a[a3] - 48) + add) : add;
		sum = (a4 >= 0) ? ((b[a4] - 48) + sum) : sum;

		if (sum <= 9)
		{
			add = 0, r[a3 + 1] = sum + 48;
		}
		else
		{
			add = sum, sum %= 10, add /= 10, r[a3 + 1] = sum + 48;
		}
	}

	(a5 == a1) ? (r[a5 + 1] = '\0', r = r + 1) : (r[a5] = '\0', r = r);
	r = (a5 >= size_r) ? 0 : r;
	return (r);
}
