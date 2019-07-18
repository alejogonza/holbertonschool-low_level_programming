/**
* clstring - entry point
* Description: string length counter.
* @s: The string in question.
* Return: length string.
*/

int clstring(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

