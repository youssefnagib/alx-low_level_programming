#ifndef DOG_H
#define DOG_H
/**
 * struct dog - func that print name age owner
 * @name: char name
 * @age: fluat age
 * @owner: char owner
 * Description: Define struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
#endif
