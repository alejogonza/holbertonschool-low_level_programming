#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - entry point
* Description: function that allocates memory using malloc.
* @b: size of mem.
* Return: pointer to mem, failure = 98.
*/
void *malloc_checked(unsigned int b)
{
	void *memy;

	memy = malloc(b);
	if (memy == NULL)
	{
		free(memy);
		exit(98);
	}
	return (memy);
}
