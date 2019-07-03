#include "holberton.h"
/**
 * _islower - entry point
 *@c: variable integral
 *Description: print 1 if is lowercase character
 *Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
