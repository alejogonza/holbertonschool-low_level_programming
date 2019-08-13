#include "holberton.h"
/**
 * wildcmp - entry point
 * Description: compares 2 strings to see matches a wildcard
 * @s2: wildcard rules
 * @s1: test string
 * Return: 1 matches 0 or not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
