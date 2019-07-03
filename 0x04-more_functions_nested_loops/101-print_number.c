#include "holberton.h"
/**
* print_number - entry point
* Description: print a int
* @n: int to print
* Return: 0
*/

void print_number(int n)
{
	unsigned int var1;
	unsigned int var2;
	unsigned int cal1;
	unsigned int cal2;

	if (n < 0)
	{
		_putchar('-');
		var1 = n * -1;
	}
	else
	{
		var1 = n;
	}

	var2 = var1;
	cal1 = 1;

	while (var2 > 9)
	{
		var2 = var2 / 10;
		cal1 = cal1 * 10;
	}

	for (; cal1 >= 1; cal1 = cal1 / 10)
	{
		cal2 = (var1 / cal1) % 10;
		_putchar((cal2) + '0');
	}
}
