#include "dog.h"

/**
 * new_dog - Functions that creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: to the new pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *other;

	other = malloc(sizeof(dog_t));

	if (other == NULL)
		return (NULL);

	other->name = name;
	other->age = age;
	other->owner = owner;

	return (other);
}
