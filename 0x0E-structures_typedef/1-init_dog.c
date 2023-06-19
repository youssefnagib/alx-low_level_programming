#include "dog.h"
#include <stdlib.h>
/**
 * _init_dog - func that init
 *
 * @d: Init
 *
 * @name: name
 *
 * @age: age
 *
 * @owner: owner
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
