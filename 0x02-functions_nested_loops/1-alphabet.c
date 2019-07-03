#include "holberton.h"
/**
 *print_alphabet - entry point
 *Description: print the alphabet with _putchar
 *Return: 0
 */
void print_alphabet(void)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
