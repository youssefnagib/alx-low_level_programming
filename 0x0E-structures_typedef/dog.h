#ifndef DOG_H
#define DOG_H

#include <stdio.h>
int _putchar(char c);
/**
 * struct dog - struct dog
 *
 * @name: name char
 *
 * @age: age float
 *
 * @owner: owner name char
 *
 * Description: name, age and owner of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
