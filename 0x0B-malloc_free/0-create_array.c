#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - entry point
 * Description: create char array and init it with a specific char
 * @size: memsize to print
 * @c: char int vals
 * Return: * to array
 */
char *create_array(unsigned int size, char c)
{
	char *arpri = NULL;
	unsigned int cter;

	if (size > 0)
	{
		arpri = (char *)malloc(size * sizeof(char));
		if (arpri == NULL)
			return (NULL);
		for (cter = 0; cter < size; cter++)
			arpri[cter] = c;
	}
	return (arpri);
}
