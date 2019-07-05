#include "holberton.h"
/**
 * string_toupper - entry point
 * Description: lowercase to uppercase
 * @a: string
 * Return: change
 */
char *string_toupper(char *a)
{
	int listener;

	for (listener = 0; a[listener]; listener++)
	{
		if ((a[listener] >= 'a') && (a[listener] <= 'z'))
			a[listener] = a[listener] - 32;
	}

	return (a);
}

