#include "main.h"
#include <stdlib>
/**
 * array_range - range
 *
 * @min: min
 *
 * @max: max
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *array = NULL;
	int i, t, c;

	c = 0;
	if (min > max)
		return (NULL);
	t = (max - min) + 1;
	array = malloc(t * sizeof(int));
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[c] = i;
			c++;
		}
		return (array);
	}
	return (NULL);
}
