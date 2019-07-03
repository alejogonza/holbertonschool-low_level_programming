#include "holberton.h"
/**
* print_line - entry point
* @n: int input
* Description: print lines
* Return: 0
*/

void print_line(int n)
{
	int li;

	if (n > -1)
	{
		for (li = 0; li < n; li++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
