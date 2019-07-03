#include "holberton.h"
/**
 * print_rev - entry point
 * Description: print string in reverse
 * @s: stg.
 * Return: 0
 */

void print_rev(char *s)

{

	int re;
	int sr;

	sr = 0;

	for (re = 0; s[re] != '\0'; re++)
	;

	for (re--; re >= 0; re--)
		_putchar(s[re]);
		sr++;
	_putchar('\n');
}
