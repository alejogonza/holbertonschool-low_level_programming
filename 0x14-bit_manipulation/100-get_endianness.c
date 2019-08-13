#include "holberton.h"
/**
 * get_endianness - entry point
 * Descripiton: checks the endianness
 * Return: 0 and 1
 */
int get_endianness(void)
{
	int a;

	a = 1;

	if (*(char *)&a == 1)
		return (1);
	else
		return (0);
}
