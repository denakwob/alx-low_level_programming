#include "dog.h"

/**
 * free_dog - frees all allocated memory
 * @d: struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
