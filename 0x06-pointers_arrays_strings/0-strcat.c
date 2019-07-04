#include "holberton.h"
/**
 * _strcat - entry point
 * Description: concatenate two string
 * @dest: O.M
 * @src: new string
 * Return: dest + src
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	for (len = 0; dest[len]; len++)
	;
	for (i = 0; src[i]; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i + 1] = '\0';

	return (dest);
}
