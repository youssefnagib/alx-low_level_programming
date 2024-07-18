#include <stdio.h>
#include "search_algos.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searches for a value using the Linear search algorithm
 * @array: list that search the value in
 * @size: size of the array
 * @value: the value that we search of
 * Return: the index of the value to search
 * or -1 if the value is not found
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
