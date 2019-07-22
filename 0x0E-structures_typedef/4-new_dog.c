#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - entry point
 * Description: new dog data
 * @name: Dog name
 * @age: Dog age.
 * @owner: Dog owner.
 * Return: * to dog, NULL = fail.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return newdog;
}

