#include "dog.h"

/**
 * init_dog - initialize struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @struct dog d: structure
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
