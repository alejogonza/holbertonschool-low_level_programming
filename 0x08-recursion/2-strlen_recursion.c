#include "holberton.h"
/**
 * _strlen_recursion - entry point
 * Description: return length of string
 * @s: character string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
