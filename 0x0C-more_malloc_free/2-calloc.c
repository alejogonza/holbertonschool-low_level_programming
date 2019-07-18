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
	char *mp;
	unsigned int armem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mp = malloc(nmemb * size);

	if (mp == NULL)
		return (NULL);

	for (armem = 0; armem < (nmemb * size); armem++)
		mp[armem] = 0;

	return (mp);
}
