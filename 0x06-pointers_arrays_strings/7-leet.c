#include "holberton.h"
/**
 * leet - entry point
 * Description: encode string
 * @s: string to crypted
 * Return: encode
 */

char *leet(char *s)
{
	int var1;
	int var2;
	char wrd[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";

	for (var1 = 0; s[var1]; var1++)
	{
		for (var2 = 0; wrd[var2]; var2++)
		{
			if (s[var1] == wrd[var2])
			{
				s[var1] = num[var2];
				break;
			}
		}
	}
	return (s);
}
