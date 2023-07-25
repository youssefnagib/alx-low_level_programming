#include "main.h"
/**
 * flip_bits - func that returns bit
 * @n: input
 * @m: input
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int counter = 0;

	while (x)
	{
		counter += (x & 1);
		x >>= 1;
	}
	return (counter);
}
