
#include "holberton.h"
/**
 * _strncat - entry point
 * Description: concatenate two string + w .-.
 * @dest: O.M
 * @src: new string
 * @n: num of char
 * Return: dest + src
 */

	char *_strncat(char *dest, char *src, int n)
	{
	int cchar;
	int i;

	for (cchar = 0; dest[cchar]; cchar++)
	;

	for (i = 0; src[i] && (i < n); i++)
	{
		dest[cchar + i] = src[i];
	}

	if (!dest[cchar + i + 1])
		dest[cchar + i + 1] = '\0';

	return (dest);
}
