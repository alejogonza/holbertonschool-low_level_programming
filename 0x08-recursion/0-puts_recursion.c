#include "holberton.h"

/**
 * _puts_recursion - entry point
 * Description: prints a string whith \n
 * @s: string
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
