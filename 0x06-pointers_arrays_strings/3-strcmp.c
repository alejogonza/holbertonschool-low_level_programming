#include "holberton.h"
/**
 * _strcmp - entry point
 * Description: compares 2 strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: - 0 if same, integer, otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int sg;

	for (sg = 0; s1[sg] == s2[sg]; sg++)
	{
		if (s1[sg] == '\0')
			return (0);
	}
	return (s1[sg] - s2[sg]);
}

