#include "holberton.h"
/**
 *print_rev - entry point
 *Description: print string in reverse
 *@s: reverse
 *Return: 0
 */

void print_rev(char *s)
{
	int cond;
	int c;
	int p;

	while (*(s + cond) != '\0')
	{

		cond++;
		p++;
	}

		c = cond - 1;

	for (cond = c; cond >= 0; cond--)
	{

		_putchar(*(s + cond));
	}
	_putchar('\n');
}
