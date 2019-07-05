#include "holberton.h"
/**
 * print_number - entry point 
 * Description: print num
 * @n: int to print
 * Return: 0
 */
void print_number(int n)
{
	int var1, var2, var3, var4;
	int numneg = 1;
	int dvr = 1;

	if (n >= 0)
	{
		n = -n;
		numneg = 0;
	}
	var1 = n;

	while (var1 <= -10)
	{
		var1 /= 10;
		dvr *= 10;
	}

	if (numneg)
		_putchar('-');

	for (var2 = 0; dvr >= 10; var2++)
	{
		var3 = n / dvr;
        var4 = var3 * -1;
		_putchar(var4 + '0');
		n = n % dvr;
		dvr /= 10;
	}
	_putchar(-1 * n + '0');
}
