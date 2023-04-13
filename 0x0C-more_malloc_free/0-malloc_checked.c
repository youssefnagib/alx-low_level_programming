#include "main.h"
/**
 * *malloc_checked - allocat memory
 *
 * @b: int
 *
 * Return: pointr or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *m = NULL;
	
	m = malloc(b);
	if (m == 0)
		exit(98);
	return (m);
}