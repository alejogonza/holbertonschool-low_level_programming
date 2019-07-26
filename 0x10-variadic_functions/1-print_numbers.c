#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - entry point
 * Description: prints numbers, followed by a new line.
 * @separator: string to print
 * @n: num of elements
 * ...: elements
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int scon = 0;

	va_list varicscring;

	if (separator == NULL)
		separator = "";

	va_start(varicscring, n);

	for (; scon < n; scon++)
	{
		if (scon)
			printf("%s", separator);
		printf("%d", va_arg(varicscring, int));
	}
	printf("\n");
	va_end(varicscring);
}
