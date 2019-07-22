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
	int val, count;
	dog *doggie = malloc(sizeof(dog));

	if (doggie == NULL)
		return (NULL);

	for (val = 0; name[val]; val++)
		;
	doggie->name = malloc((val + 1) * sizeof(char));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	for (count = 0; count < val; count++)
		doggie->name[count] = name[count];
	doggie->name[count] = '\0';

	if (age > 0.0)
		doggie->age = age;
	else
		return (NULL);

	for (val = 0; owner[val]; val++)
		;
	doggie->owner = malloc((val + 1) * sizeof(char));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	for (count = 0; count < val; count++)
		doggie->owner[count] = owner[count];
	doggie->owner[count] = '\0';

	return (doggie);
}

