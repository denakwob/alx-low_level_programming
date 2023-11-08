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
			return (NULL);
		}
		if (d->owner)
		{
			free(d->owner);
			return (NULL);
		}
		free(d);
		return (NULL);
	}
}
