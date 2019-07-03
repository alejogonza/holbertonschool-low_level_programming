#include "holberton.h"

/**
 * print_last_digit - entry point
 * Description: find the last digit of ln
 * @ln: number to evaluate
 * Return: fn
 */
int print_last_digit(int ln)
{
	int fn;

	if (ln >= 0)
	{
		fn = ln % 10;
	} else
	{
		fn = -(ln % 10);
	}

	_putchar('0' + fn);
	return (fn);
}
