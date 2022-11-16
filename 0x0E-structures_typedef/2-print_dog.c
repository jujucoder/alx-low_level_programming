#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct
 * @d: structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else
	{
		if (d->name == NULL)
			printf("Name: (nill)");
		else
			printf("Name: %s", d->name);
		if (d->age == NULL)
			printf("Age: (nill)");
		else
			printf("Age: %d", d->age);
		if (d->owner == NULL)
			printf("Owner: (nill)");
		else
			printf("Owner: %s", d->owner);
	}
}
