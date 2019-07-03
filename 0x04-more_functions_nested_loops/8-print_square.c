#include "holberton.h"
/**
* print_square - entry point
* @size: square size
* Description: print a square
* Return: 0
*/

void print_square(int size)
{
	int med;
	int pri;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (med = 0; med < size; med++)
		{
			for (pri = 0; pri < size; pri++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
