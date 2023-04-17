#include "dog.h"
/**
 * init_dog - struct dog
 *
 * @d: structure
 *
 * @name: name char
 *
 * @age: age float
 *
 * @owner: name of owner char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
