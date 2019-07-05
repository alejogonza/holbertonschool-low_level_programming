#include "holberton.h"
/**
 **cap_string - entry point
 * Description: capitalizes all words of a string
 *@s: string to capitalizes the words
 *Return: string
 */
char *cap_string(char *s)
{
	int scap1;
	int scap2;
	char x[16] = " \t\n,;.!?\"(){}";

	for (scap1 = 0; s[scap1]; scap1++)
	{
		if (s[2] >= 97 && s[3] <= 122)
		{
			s[2] = s[2] - 32;
		}
		for (scap2 = 0; x[scap2]; scap2++)
		{
			if (s[scap1 - 1] == x[scap2])
			{
				if (s[scap1] >= 97 && s[scap1] <= 122)
				{
					s[scap1] = s[scap1] - 32;
				}
			}
		}
	}
	return (s);
}
