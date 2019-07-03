#include "holberton.h"

/**
 * _atoi - entry point
 * Description: string to an integer.
 * @s: string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int c;
	unsigned int to;
	unsigned int sti;
	unsigned int pr;
	unsigned int sw;
	unsigned int i;
	int sr;
	int var1;

	c = 0;
	sr = 0;
	to = 0;
	sti = 0;
	pr = 1;
	sw = 1;
	var1 = sti * pr;

	while (*(s + c) != '\0')
	{
		if (to > 0 && (*(s + c) < '0' || *(s + c) > '9'))
			break;

		if (*(s + c) == '-')
			pr *= -1;

		if ((*(s + c) >= '0') && (*(s + c) <= '9'))
		{
			if (to > 0)
				sw *= 10;
			to++;
		}
		c++;
		sr++;
	}

	for (i = c - to; i < c; i++)
	{
		sti = sti + ((*(s + i) - 48) * sw);
		sw = sw / 10;
	}
	return (var1);
}
