#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * fworldl - entry point
 * Description: find length of first word
 * @s: string to eval
 * @index: start looking word
 * Return: find length word
 */
int fworldl(char *s, int index)
{
	int a;
	int ln;
	int res;

	ln = 0;
	res = 0;

	for (a = index; s[a]; a++)
	{
		if (s[a] != ' ')
		{
			ln++;
			res = 1;
		}
		else if (s[a] == ' ' && res)
			break;
	}
	return (ln);
}
/**
 * cwords - entry point
 * Description: count the words in string
 * @s: string to eval
 * Return: number of words
 */
int cwords(char *s)
{
	int a;
	int itsaW;
	int n;

	n = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == ' ')
			itsaW = 0;
		else
		{
			if (itsaW == 0)
				n++;
			itsaW = 1;
		}
	}

	return (n);
}
/**
 * strtow - entry point
 * Description: splits the string in the words
 * @str: string to eval
 * Return: * to array of chars
 */
char **strtow(char *str)
{
	char **ptr = NULL;
	int numofW, a, b, c, d, e;

	numofW, c, d, e = 0;
	if ((str == NULL) || (*str == '\0'))
		return (NULL);
	numofW = cwords(str), ptr = malloc((numofW + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[numofW] = NULL;
	for (a = 0; str[a]; a++)
	{
		if (str[a] != ' ')
		{
			c = fworldl(str, a);
			if (d < numofW)
			{
				ptr[d] = malloc((c + 1) * sizeof(char));
				if (ptr[d] == NULL)
				{
					while (d >= 0)
						free(ptr[--d]);
					free(ptr);
					return (NULL);
				}
				d++;
			}
			a = a + c;
		}
	}
	b = 0, d = 0;
	while (d < numofW)
	{
		for (; str[b] && (str[b] == ' '); b++);
		e = 0;
		for (a = b; str[a] && (str[a] != ' '); a++)
			ptr[d][e++] = str[a];
		ptr[d][e] = '\0';
		b = b + e, d++;
	}
	return (ptr);
}


