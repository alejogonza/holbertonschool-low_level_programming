#include "holberton.h"

/**
 * _isupper - entry point
 * Description: if uppercase 1 - 0 if not
 * @c: char input
 * Return: 1 if uppercase - 0 if not
 */
int _isupper(int c)
{
	int resabc;

	if ((c >= 'A') && (c <= 'Z'))
	{
		resabc = 1;
	}

	else
	{
		resabc = 0;
	}

	return (resabc);
}
