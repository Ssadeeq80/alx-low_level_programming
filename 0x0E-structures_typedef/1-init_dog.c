#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize struct dog datat type.
 *
 * @d: dog struct
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
