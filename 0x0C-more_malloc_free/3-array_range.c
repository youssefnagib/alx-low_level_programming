#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers
 * @min: Int
 * @max: Int
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
