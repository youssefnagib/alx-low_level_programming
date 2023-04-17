#ifndef DOG_H
#define DOG_H

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

int _putchar(char c);
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
