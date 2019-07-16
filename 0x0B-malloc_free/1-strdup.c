#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - entry point
 * Description: returns a pointer to a new space in memory and cp stng 
 * @str: string to cp
 * Return: * to memory block - cp of str
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int memint;
	unsigned int size;
	size = 0;

	if (str == NULL)
		return (NULL);

	for (memint = 0; str[memint] != '\0'; memint++)
	{
		size++;
	}

	ptr = (char *)malloc((size + 1) * sizeof(char));

	if (ptr != NULL)
	{
		for (memint = 0; memint < size; memint++)
			ptr[memint] = str[memint];
	}
	else
		ptr = NULL;

	return (ptr);
}
