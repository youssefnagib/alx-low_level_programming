#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 *
 * @name: char
 *
 * @age: float
 *
 * @owner: char
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *zira;
	char *n, *o;
	int a = 0, b = 0;

	zira = malloc(sizeof(dog_t));
	if (zira == NULL)
		return (NULL);
	for (; *(name + a); a++)
		;
	for (; *(owner + b); b++)
		;
	n = (char *)malloc(sizeof(char) * (a + 1));
	o = (char *)malloc(sizeof(char) * (b + 1));

	if (!(n && o))
	{
		if (!o && n)
			free(n);
		free(zira);
		return (NULL);
	}
	for (; a >= 0; a--)
		*(n + a) = *(name + a);
	for (; b >= 0; b--)
		*(o + b) = *(owner + b);
	zira->name = n;
	zira->age = age;
	zira->owner = o;
	return (zira);
}
