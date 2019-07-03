#include "holberton.h"
/**
* _isdigit - entry point
* Description: if uppercase 1 - 0 if not
* @c: char input
* Return: 1 if digit, 0 if not
*/

int _isdigit(int c)
{
	int rnum = 0;

	if ((c >= '0') && (c <= '9'))
	{
		rnum = 1;
	} else
	{
		rnum = 0;
	}

	return (rnum);
}
