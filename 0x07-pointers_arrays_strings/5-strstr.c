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
	unsigned int var1;
    unsigned int var2;
    unsigned int blan;

	for (var1 = 0; *(haystack + var1) != '\0'; var1++)
	{
		blan = 1;
		for (var2 = 0; *(needle + var2) != '\0'; var2++)
		{
			if (*(haystack + var2 + var1) == *(needle + var2))
				blan = 0;
			else
			{
				blan = 1;
				break;
			}
		}
		if (blan == 0)
			break;
	}
	return (haystack + var1);
}
