#include "main.h"
/**
 * get_bit - func returns the value of a bit at a given index
 * @n: input
 * @index: input
 *
 * Return:0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	n >>= index;
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
