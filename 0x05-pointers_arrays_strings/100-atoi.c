#include "holberton.h"

/**
 * _atoi - entry point
 * Description: string to an integer.
 * @s: string.
 * Return: integer.
 */

int _atoi(char *s)
{

	int ms = 0;
	int in = 0;
	int rt = 0;
	short bl = 0;
	int sr = 0;
	ms = -1;

	while (s[in] != '\0')
	{
		if (s[in] == '-')
			ms = ms * -1;

		if (s[in] >= '0' && s[in] <= '9')
		{
			rt = rt * 10;
			rt = rt - (s[in] - '0');
			bl = 1;
		}
		else if (bl == 1)
			break;
		in++;
		sr++;
	}
	rt = rt * ms;
	return (rt);
}
