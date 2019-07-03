#include "holberton.h"
/**
* more_numbers - entry point
* Description: print numbers 0-14 (3 putchars)
* Return: 0
*/

void more_numbers(void)
{
	int var1;
	int var2;
	int num;

	for (var2 = 1; var2 <= 10; var2++)
	{
		for (var1 = 0; var1 <= 14; var1++)
		{
			num = var1;

			if (var1 > 9)
			{
				_putchar('1');
				num = var1 % 10;
			}

			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
