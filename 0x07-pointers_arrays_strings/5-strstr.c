#include "holberton.h"
/**
 * _strstr - entry point
 * Description: function that locates a substring
 * @haystack: string to look needle
 * @needle: string to look in haystack
 *Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *phaystack;
	char *pneedle = needle;

	while (*haystack != '\0')
	{
		needle = pneedle;
		phaystack = haystack;
		while (*needle != '\0' && *haystack != '\0' && *haystack == *needle)
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return (phaystack);
		haystack = phaystack + 1;
	}
	return ('\0');
}
