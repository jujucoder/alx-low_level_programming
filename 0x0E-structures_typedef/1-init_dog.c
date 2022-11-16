#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @d: structure to be initialized
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
