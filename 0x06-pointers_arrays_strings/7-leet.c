#include "holberton.h"
/**
 * leet - entry point
 * Description: encode string
 * @s: string to crypted
 * Return: encode
 */
char *leet(char *s)
{
	int chc = 0;

	for (; s[chc]; chc++)
	{
		if ((s[chc] == 'a') || (s[chc] == 'A'))
			s[chc] = '4';
		else if ((s[chc] == 'e') || (s[chc] == 'E'))
			s[chc] = '3';
		else if ((s[chc] == 'o') || (s[chc] == 'O'))
			s[chc] = '0';
		else if ((s[chc] == 't') || (s[chc] == 'T'))
			s[chc] = '7';
		else if ((s[chc] == 'l') || (s[chc] == 'L'))
			s[chc] = '1';
	}

	return (s);
}
