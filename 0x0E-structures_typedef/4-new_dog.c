#include "dog.h"

/**
 * _strcpy - function that copies the string pointed to
 * @dest: pointer to string entry data
 * @src: destiny data
 * Return: return value of dest
 */

void *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (*src != '\0')
	{
		for (i = 0; *(src + i) != '\0'; i++)
		{
			*(dest + i) = *(src + i);
		}
	}

	*(dest + i) = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string.
 * @s: pointer to String
 * Return: Nothing
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

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

	if (other)
	{
		other->name = malloc((_strlen(name) + 1) * sizeof(char));
		if (other->name)
		{
			other->owner = malloc((_strlen(owner) + 1) * sizeof(char));
			if (other->owner)
			{
				_strcpy(other->name, name);
				_strcpy(other->owner, owner);
				other->age = age;
				return (other);
			}
			else
			{
				free(other->name);
				free(other);
			}
		}
		else
			free(other);
	}
	return (NULL);
}
