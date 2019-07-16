#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - entry point
 * Description: concatenates all of the arguments of the program
 * @ac: count of args
 * @av: vals
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int c;
	int d;

	c = 0;
	d = 0;

	char *s = NULL;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (a = 0; a < ac; a++)

		for (b = 0; av[a][b]; b++)
		{
			d++;
		}

	s = (char *)malloc((d + ac + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s[c++] = av[a][b];
		s[c++] = '\n';
	}
	s[c] = '\0';

	return (s);
}
