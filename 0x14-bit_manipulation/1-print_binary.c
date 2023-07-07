#include "main.h"

/**
 * print_binary - binary to dec
 *
 * @n: input
 */

void print_binary(unsigned long int n)
{
	int d, count = 0;
	unsigned long int c;

	for (d = 63; d >= 0; d--)
	{
		c = n >> d;

		if (c & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
