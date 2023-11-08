#include "dog.h"
#include <stdlib.h>

/**
 * dog_t *new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: 0
 * Author - Nana Obeng
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = strdup(name);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->age = age;

	d->owner = strdup(owner);

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
