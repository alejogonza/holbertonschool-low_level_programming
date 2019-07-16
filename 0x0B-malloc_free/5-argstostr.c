#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **argstostr - entry point
 * Description: function that concatenates the args in your program
 * @ac: nums of arguments
 * @av: * to arguments
 *Return: * to a new string or NULL = fails
 */
char *argstostr(int ac, char **av)
{
	int c1, c2 lt, a;
	char *nw;

	lt = 0;
	a = 0;
	if (ac == 0)
	{
		return (NULL);
	}
	for (c1 = 0; c1 < ac; c1++)
	{
		if (av[c1] == NULL)
		{
			return (NULL);
		}
		for (c2 = 0; av[c1][c2]; c2++)
		{
			lt++;
		}
	}
	nw = malloc(sizeof(char) * (lt + ac + 1));
	if (nw == NULL)
	{
		free(nw);
		return (NULL);
	}
	for (c1 = 0; c1 < ac; c1++)
	{
		for (c2 = 0; av[c1][c2]; c2++)
		{
			nw[a] = av[c1][c2];
			a++;
		}
		nw[a] = '\n';
		a++;
	}
	return (nw);
}
