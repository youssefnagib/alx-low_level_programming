#include "function_pointersi.h"
/**
 * array_iterator -  maps array through fun pointer
 *
 * @array: pointer to array
 *
 * @size: Size of the array
 *
 * @action: fun pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	while (array <= end)
		action(*array++);
}
