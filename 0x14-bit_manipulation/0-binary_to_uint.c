#include "main.h"

/**
 * binary_to_uint - func that convert bin to dec
 *
 * @b: char input
 *
 * Return: reslute if not NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	unsigned int i;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		r <<= 1;
		if (b[i] == '1')
		{
			r += 1;
		}
			i++;
	}
	return (r);
}
