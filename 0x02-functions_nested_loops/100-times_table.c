#include "holberton.h"

/**
 *print_times_table - entry point
 *Description: print multiplication table of 3-5-12
 *@n: integer
 */
void print_times_table(int n)
{
	int var1, var2, rn;

	if (n >= 0 && n <= 15)
	{
		for (var1 = 0; var1 <= n; var1++)
		{
			_putchar(48);
			for (var2 = 1; var2 <= n; var2++)
			{
				rn = var1 * var2;
				_putchar(44);
				_putchar(32);
				if (rn <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(rn + 48);
				}
				else if (rn <= 99)
				{
					_putchar(32);
					_putchar((rn / 10) + 48);
					_putchar((rn % 10) + 48);
				}
				else
				{
					_putchar(((rn / 100) % 10) + 48);
					_putchar(((rn / 10) % 10) + 48);
					_putchar((rn % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
