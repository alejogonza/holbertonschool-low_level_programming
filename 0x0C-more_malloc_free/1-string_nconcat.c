#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
* clstring - provides string length.
* @s: The string
* Return: length of string.
*/

int clstring(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* string_nconcat - entry point
* Description: function that concatenates two strings.
* @s1: string add
* @s2: string add
* @n: number to chars s2 to add.
* Return: * to new string success, or NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int cstring;
	char *nstring;
	int fchar;
	int ccat;

	if (n <= 0)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= (unsigned int)clstring(s2))
		cstring = clstring(s2);
	else
		cstring = n;

	nstring = (char *)malloc(cstring + clstring(s1));
	if (nstring == NULL)
	{
		free(nstring);
		return (NULL);
	}
	for (fchar = 0; fchar < clstring(s1); fchar++)
		nstring[fchar] = s1[fchar];
	for (ccat = 0; ccat < cstring ; ccat++)
		nstring[fchar + ccat] = s2[ccat];

	return (nstring);
}
