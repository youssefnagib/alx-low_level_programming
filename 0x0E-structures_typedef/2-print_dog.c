#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog
 *
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name != NULL)
		{
			printf("%s\n", d->name);
		}
		else
		{
			printf("(nil)\n");
		}
		printf("Age: ");
		if (d->age >= 0)
		{
			printf("%f\n", d->age);
		}
		else
		{
			printf("(nil)\n");
		}
		printf("Owner: ");
		if (d->owner != NULL)
		{
			printf("%s\n", d->owner);
		}
		else
		{
			printf("(nil)\n");
		}
	}
}
