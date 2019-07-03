#include "holberton.h"
/**
 * _strlen - entry point
 * Description: Returns the length in s
 * @s: char
 * Return: s
 */

int _strlen(char *s)
{

	int c = 0;
	int w;

	while (*s != '\0')
	{
		c++;
		s++;
		w++;
	}
	return (c);
}
