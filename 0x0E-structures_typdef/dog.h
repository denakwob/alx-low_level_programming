#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - declare a type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog {
	char *name;
	float age;
	char *owner;
};

#endif
