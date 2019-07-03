#include "holberton.h"

/**
 * puts_half - entry point
 * Description: prints half a string.
 * @str: string.
 * Return: 0
 */
void puts_half(char *str)
{
	int in;
	int stg;
	int c;

	stg = 0;
	c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
			break;
		c++;
		stg++;
	}

	if (c % 2 == 1)
		in = c / 2;
	else
		in = (c - 1) / 2;

	for (in++; in < c; in++)
		_putchar(str[in]);
	_putchar('\n');
}
