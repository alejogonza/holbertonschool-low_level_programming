#include "holberton.h"
/**
 *print_sign - entry point
 *Description: print the sign of a number + 0 -
 *@ns: variable integral
 *Return: 1 -1 0
 */

int print_sign(int ns)
{
	if (ns < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (ns > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
