#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - entry point
 * Description: copies the string pointer, null byte, dest pointer
 * @dest: destiny
 * @src: font
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int cr;
	int ds;

	cr = 0;
	ds = 0;

	for (; src[cr] != '\0'; cr++)
	{
		dest[cr] = src[cr];
	}
	dest[cr] = '\0';
		ds++;
	return (dest);
}
