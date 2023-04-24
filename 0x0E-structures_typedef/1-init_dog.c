#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type dog
 *
 * @d: pointer to dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
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


