#include "main.h"
#include <stdlib.h>

/**
 * create_array - array
 *
 * @size: size of the array
 *
 * @c: specific char
 *
 * Return: a pointer to array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
{
	return (NULL);
}

	char *arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
{
	return (NULL);
}

	for (unsigned int i = 0; i < size; i++)
{
	arr[i] = c;
}

	return (arr);
}
