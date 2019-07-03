#include "holberton.h"
/**
* print_diagonal - entry point
* @n: num of char to print
* Description: draw diagonal line
* Return: 0
*/

void print_diagonal(int n)
{
	int num;
	int pri;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			for (pri = 0; pri < num; pri++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
