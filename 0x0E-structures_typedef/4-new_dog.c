#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new dog
 *
 * @name: name
 *
 * @age: age
 *
 * @owner: owner
 *
 * Return:pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *max = malloc(sizeof(dog_t));

	if (max == NULL)
	{

		return (NULL);
	}
	max->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (max->name == NULL)
	{
		free(max);
		return (NULL);
	}
	max->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (max->owner == NULL)
	{
		free(max->name);
		free(max);
		return (NULL);
	}
	strcpy(max->name, name);
	strcpy(max->owner, owner);
	max->age = age;

	return (max);
}
