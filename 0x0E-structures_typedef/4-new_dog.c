#include "dog.h"
#include <stdlib.h>

/**
 * dog_t *new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * @d: struct
 *
 * Return: 0
 * Author - Nana Obeng
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		return (NULL);
	}
	return (d);
}
