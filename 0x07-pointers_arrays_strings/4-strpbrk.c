
#include "holberton.h"
/**
 * char *_strpbrk - entry point
 * Description: searches a string for any of a set of bytes.
 * @accept: string match
 * @s: string
 * Return: first match
 */
char *_strpbrk(char *s, char *accept)
{
	int cha1;
	int cha2;


	for (cha1 = 0; s[cha1]; cha1++)
	{
		for (cha2 = 0; accept[cha2]; cha2++)
		{
			if (s[cha1] == accept[cha2])
				goto twolp;
		}
	}
	return ('\0');
twolp: return (s + cha1);
}
