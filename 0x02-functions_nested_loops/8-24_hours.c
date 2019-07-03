#include "holberton.h"

/**
 * jack_bauer - entry point
 * Description: prints the 00:00 - 23:59 of Jack Bauer
 * Return: 0
 */
void jack_bauer(void)
{
	int hr, ms;

	for (hr = 0; hr < 24; hr++)
	{
		for (ms = 0; ms < 60; ms++)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(ms / 10 + '0');
			_putchar(ms % 10 + '0');
			_putchar('\n');
		}
	}
}
