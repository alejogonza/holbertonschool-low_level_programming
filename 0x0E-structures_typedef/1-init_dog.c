#include "dog.h"
/**
 * init_dog - entry point
 * Description: creates a dog data
 * @d: Dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
