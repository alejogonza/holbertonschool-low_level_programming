#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - entry point
 * Description:  prints strings, followed by a new line.
 * @separator: string that separates values
 * @n: number of args
 * @...: variadic args
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list varicscring;

	unsigned int scon = 0;

	char *arg = NULL;

	va_start(varicscring, n);

	for (; scon < n; scon++)
	{
		if (scon && (separator != NULL))

			printf("%s", separator);

		arg = va_arg(varicscring, char *);

		if (arg)
			printf("%s", arg);
		else
			printf("(nil)");

	}
		printf("\n");

	va_end(varicscring);
}
