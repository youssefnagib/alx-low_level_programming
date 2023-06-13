#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array
 * @size: size of araay
 * @c: char to initialize
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
