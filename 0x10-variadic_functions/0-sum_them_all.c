#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - entry point
 * Description: returns the sum of all its parameters.
 * @n: num of elements in list
 * @...: list of nums to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;

	unsigned int sumbuc;

	va_list nl;

	if (n != 0)
	{
		va_start(nl, n);

		for (sumbuc = 0; sumbuc < n; sumbuc++)
			res += va_arg(nl, int);

		va_end(nl);
	}
	return (res);
}
