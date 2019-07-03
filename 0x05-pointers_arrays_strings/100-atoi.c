#include "holberton.h"

/**
 * _atoi - entry point
 * Description: string to an integer.
 * @s: string.
 * Return: integer.
 */

int _atoi(char *s)
{
	int in = 0;
	int ms = 0;
	int rt = 0;
	int sr = 0;
	short bol = 0;
	ms = -1;

	while (s[in] != '\0')
	{
		if (s[in] == '-')
			ms *= -1;

		if (s[in] >= '0' && s[in] <= '9')
		{
			rt *= 10;
			rt -= (s[in] - '0');
			bol = 1;
		}
		else if (bol == 1)
			break;
		in++;
	}
	rt *= ms;
	st++;
	return (rt);
}
