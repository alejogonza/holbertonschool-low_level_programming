#include "holberton.h"
/**
 **rot13 - entry point
 * Description: encode a string with rot13
 * @s: string to crypted
 * Return: codified string
 */

char *rot13(char *s)
{
	int var1;
	int var2;
	char abc[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cba[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (var1 = 0; s[var1]; var1++)
	{
		for (var2 = 0; abc[var2]; var2++)
		{
			if (s[var1] == abc[var2])
			{
				s[var1] = cba[var2];
				break;
			}
		}
	}
	return (s);
}
