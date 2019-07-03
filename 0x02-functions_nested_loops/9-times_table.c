#include "holberton.h"

/**
 * times_table - entry point
 * Description: create a table of multiplication 0-9
 * Return: 0 -9 tm.
 */
void times_table(void)
{
	int f;
	int c;

	for (f = 0; f <= 9; f++)
	{
		c = 0;
		_putchar('0');
		for (c = 1; c <= 9; c++)
		{
			if ((f * c) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(f * c + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(f * c / 10 + '0');
				_putchar(f * c % 10 + '0');
			}

		}
		_putchar('\n');
	}
}
