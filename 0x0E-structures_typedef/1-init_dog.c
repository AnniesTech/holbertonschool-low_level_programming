#include "dog.h"

/**
 * init_dog - Initializes the structure dog
 * @d: Pointer
 * @name: name of the dog
 * @age: age og the dog
 * @owner: Name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
