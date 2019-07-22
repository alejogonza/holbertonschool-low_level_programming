#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - entry point
 * Description: frees allocated dogs.
 * @d: Dog to free.
 * Return: Void
 */

void free_dog(dog_t *d)
{
	free(d);
}

