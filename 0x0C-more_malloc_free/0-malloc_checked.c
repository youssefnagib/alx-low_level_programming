#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - check malloc
 * @b: Intr
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
