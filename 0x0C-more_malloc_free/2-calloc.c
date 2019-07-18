#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - entry point
* Descripton: allocates memory for an array, using malloc.
* @nmemb: num of elements.
* @size: size of the element.
* Return: array upon success null = fail.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int mloc;
	unsigned int *ary;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ary = (unsigned int *)malloc(nmemb * size * sizeof(int));
	if (ary == NULL)
	{
		free(ary);
		return (NULL);
	}
	for (mloc = 0; mloc <= size * nmemb; mloc++)
		ary[mloc] = 0;
	return (ary);
}
