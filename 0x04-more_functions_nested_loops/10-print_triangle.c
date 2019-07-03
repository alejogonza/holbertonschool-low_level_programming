#include "holberton.h"
/**
* print_triangle - entry point
* Description: print triangle
* @size: int
* Return: 0
*/

void print_triangle(int size)
{
	int bas;
	int alt;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (bas = 1; bas <= size; bas++)
	{
	for (alt = 1; alt <= size; alt++)
	{
	if (alt <= size - bas)
	{
		_putchar(' ');
	}
	else
	{
		_putchar('#');
	}
	}
		_putchar('\n');
	}
}
