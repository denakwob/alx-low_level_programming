#include "dog.h"

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

	new_d =(dog_t *)malloc(sizeof(dog_t));

	if (new_d == NULL)
	{
		return (NULL);
	}

	new_d->name = strcpy(name);

	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}

	new_d->age = age;

	new_d->owner = strcpy(owner);

	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	return (new_d);
}
