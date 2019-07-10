#include "holberton.h"
/**
 * lenfinder - entry point
 * Description: find the length string
 * @s: string to evaluate
 * Return: the length
 */
int lenfinder(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (lenfinder(s + 1) + 1);
}
/**
 * palinCalcul - entry point
 * Description: calculate palindrome recursively
 * @onset: char pointer to beginning
 * @finish: char pointer to finish
 * Return: the length
 */
int palinCalcul(char *onset, char *finish)
{
	int result = 0;

	if (onset == finish)
		return (1);
	else if ((onset + 1) == finish)
	{
		if (onset[0] == finish[0])
			return (1);
		else
			return (0);
	}
	else
	{
		if (onset[0] == finish[0])
			result = palinCalcul(onset + 1, finish - 1);
		else
			return (0);
	}
	return (result);
}

/**
 * is_palindrome - entry point
 * Description: string is a palindrome
 * @s: string to evaluate
 * Return: 1 if s is 0 if not
 */
int is_palindrome(char *s)
{
	int result = 0;
	int len = 0;
	char *strEnd;

	len = lenfinder(s);
	strEnd = s + len;

	if (len < 1)
		result = 1;
	else if (len == 1)
		result = 0;
	else
		result = palinCalcul(s, strEnd - 1);

	return (result);
}
