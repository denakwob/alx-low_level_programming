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
	dog_t *new_d;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}

	new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
	{
		return (NULL);
	}

	new_d->name = malloc(sizeof(char) * (strlen(name) + 1));
       	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}

	new_d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}

	new_d->name = strcpy(new_d->name, name);
	new_d->age = age;
	new_d->owner = strcpy(new_d->owner, owner);

	return (new_d);
}
