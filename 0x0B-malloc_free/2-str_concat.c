#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - entry point
 * Description: concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: s1,s2 concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *pointer = NULL;
	int a;
	int b;
	int c;

	c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
		;

	for (b = 0; s2[b]; b++)
		;

	pointer = malloc((a + b + 1) * sizeof(char));
	if (pointer == NULL)
		return (NULL);

	for (c = 0; s1 && s1[c]; c++)
		pointer[c] = s1[c];
	pointer[c] = '\0';

	for (c = 0; s2 && s2[c]; c++)
		pointer[a + c] = s2[c];
	pointer[a + c] = '\0';

	return (pointer);
}
