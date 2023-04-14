#include "main.h"
/**
 * _calloc - point
 *
 * @nmemb: size of array
 *
 * @size: size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;
	unsigned int i;
	unsigned int t;
	char *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	t = nmemb * size;
	array = malloc(t);
	m = (char *)array;
	if (m != NULL)
	{
		for (i = 0; i < t; i++)
			m[i] = 0;
		return (m);
	}
	return (NULL);
}
