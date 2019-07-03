#include "holberton.h"

/**
 * rev_string - entry point
 * Description: string in rev.
 * @s: string.
 * Return: 0
 */

void rev_string(char *s)
{
	int c;
	int pal;
	int x;
	int ss;
	char cc;

	ss = 0;

	for (pal = 0; s[pal] != '\0'; pal++)

	;
		x = pal;

	for (pal--, c = 0; c < x / 2; pal--, c++)
	{

		cc = s[c];
		s[c] = s[pal];
		s[pal] = cc;
		ss++;
	}
}
