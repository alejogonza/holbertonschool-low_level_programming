#include "holberton.h"
/**
 *_isalpha - entry point
 *Description: return 1 if lowercase or uppercase else R 0
 *@lu: variable integral
 *Return: 0 - 1
 */
int _isalpha(int lu)
{
	if (lu >= 'a' && lu <= 'z')
	{
		return (1);
	}
	if (lu >= 'A' && lu <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
