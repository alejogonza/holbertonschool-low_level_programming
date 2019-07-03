#include "holberton.h"

/**
 * puts2 - entry point
 * Description: print char out of a string.
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int c = 0;
	int sc = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
			sc++;
		}
		if (c % 2 == 0)
			_putchar(str[c]);
		c++;
	}
}
