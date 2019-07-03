#include "holberton.h"
/**
 *print_alphabet_x10 - entry point
 *Description: Print the alphabet x10 with _putchar
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int o, t;

	for (o = 0 ; o < 10; o++)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
	}
}
