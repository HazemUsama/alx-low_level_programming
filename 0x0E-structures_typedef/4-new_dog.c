#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 *
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *d_name, o_name;

	strcpy(d_name, name);
	strcpy(o_name, owner);

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	if (d_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	if (o_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = d_name;
	new_dog->age = age;
	new_dog->owner = o_name;

	return (new_dog);

}


