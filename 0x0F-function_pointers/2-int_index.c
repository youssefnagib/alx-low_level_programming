#include <stdio>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: cmp
 *
 * Return: 0 if false, something else otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
		{
			return (i);
		}
	}
	return (-1);
}
