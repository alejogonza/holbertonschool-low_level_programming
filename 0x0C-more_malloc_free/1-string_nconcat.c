#include "holberton.h"
#include <stdlib.h>

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
	char *stgcount;
	unsigned int list1;
    unsigned int list2;
    unsigned int lgt;
    unsigned int ccat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (list1 = 0; s1[list1] != '\0'; list1++)
		;

	for (list2 = 0; s2[list2] != '\0'; list2++)
		;

	if (n > list2)
		n = list2;

	lgt = list1 + n;

	stgcount = malloc(lgt + 1);

	if (stgcount == NULL)
		return (NULL);

	for (ccat = 0; ccat < lgt; ccat++)
		if (ccat < list1)
			stgcount[ccat] = s1[ccat];
		else
			stgcount[ccat] = s2[ccat - list1];

	stgcount[ccat] = '\0';

	return (stgcount);
}
