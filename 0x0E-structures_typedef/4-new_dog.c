#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

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
	dog_t *new_popy;
	int i, j, k, l;

	new_popy = malloc(sizeof(dog_t));
	if (new_popy == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	new_popy->name = malloc(sizeof(char) * (i + 1));
	if (new_popy->name == NULL)
	{
		free(new_popy);
		return (NULL);
	}
	new_popy->owner = malloc(sizeof(char) * (j + 1));
	if (new_popy->owner == NULL)
	{
		free(new_popy->name);
		free(new_popy);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		new_popy->name[k] = name[k];
	for (l = 0; l <= j; l++)
		new_popy->owner[l] = owner[l];
	new_popy->age = age;
	return (new_popy);
}
