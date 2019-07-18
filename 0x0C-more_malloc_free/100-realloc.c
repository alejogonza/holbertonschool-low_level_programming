#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **_realloc - entry point
 * description: reallocates a memory block using malloc and free
 *@ptr: array with the elems
 *@old_size: old size
 *@new_size: new size
 *Return: prt okk, fail NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(sizeof(char) * new_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
