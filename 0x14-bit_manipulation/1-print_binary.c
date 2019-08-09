#include "holberton.h"

/**
 * print_binary - entry point
 * Description: prints the binary representation of a number.
 * @n: num to change
 * Return: null
 */


void print_binary(unsigned long int n)
{
	int initial = 0;
	int conv;

	if (n == 0)
	{
		_putchar('0');
	}

	for (conv = ((sizeof(n) * 8) - 1); conv >= 0; conv--)
	{
		if ((n >> conv) & 1)
		{
			initial = 1;
			_putchar('1');
		}
		else if (initial == 1)
		{
			_putchar('0');
		}
	}
}
