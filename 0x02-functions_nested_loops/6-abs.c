#include "holberton.h"
/**
 *_abs - entry point
 *Description: print an absolute value
 *@av: variable av
 *Return: 0
 */
int _abs(int av)
{
	int r;

	if (av > 0)
	{
		r = av;
	} else if (av < 0)
	{
		r = -av;
	} else
	{
		r = 0;
	}

	return (r);
}
