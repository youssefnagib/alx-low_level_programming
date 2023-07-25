#include "main.h"
/**
 * clear_bit - func that that sets the value 0
 * @n: input
 * @index: input
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask = ~(1 << index);
	*n &= mask;

	return (1);
}
